
class Solution {
    static const int MOD = 1000000007;

    struct Node {
        long long sum = 0;
        long long sumSq = 0;
        long long lazy = 0;
    };

    vector<Node> tree;
    int n;

    void apply(int node, int left, int right, long long val) {
        long long len = right - left + 1;

        tree[node].sumSq =
            (tree[node].sumSq
             + 2LL * val * tree[node].sum
             + len * val % MOD * val) % MOD;

        tree[node].sum =
            (tree[node].sum + len * val) % MOD;

        tree[node].lazy =
            (tree[node].lazy + val) % MOD;
    }

    void push(int node, int left, int right) {
        if (tree[node].lazy == 0 || left == right)
            return;

        int mid = left + (right - left) / 2;
        long long val = tree[node].lazy;

        apply(node * 2, left, mid, val);
        apply(node * 2 + 1, mid + 1, right, val);

        tree[node].lazy = 0;
    }

    void update(int node, int left, int right,
                int ql, int qr) {
        if (ql > right || qr < left)
            return;

        if (ql <= left && right <= qr) {
            apply(node, left, right, 1);
            return;
        }

        push(node, left, right);

        int mid = left + (right - left) / 2;

        update(node * 2, left, mid, ql, qr);
        update(node * 2 + 1, mid + 1, right, ql, qr);

        tree[node].sum =
            (tree[node * 2].sum +
             tree[node * 2 + 1].sum) % MOD;

        tree[node].sumSq =
            (tree[node * 2].sumSq +
             tree[node * 2 + 1].sumSq) % MOD;
    }

public:
    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.assign(4 * n, Node());

        unordered_map<int, int> last;
        long long ans = 0;

        for (int r = 0; r < n; r++) {
            int prev = -1;

            if (last.count(nums[r]))
                prev = last[nums[r]];

            update(1, 0, n - 1, prev + 1, r);

            last[nums[r]] = r;

            ans = (ans + tree[1].sumSq) % MOD;
        }

        return ans;
    }
};
