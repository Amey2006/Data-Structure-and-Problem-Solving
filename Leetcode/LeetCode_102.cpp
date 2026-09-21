#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int size = q.size();

            vector<int> v;

            for (int i = 0; i < size; i++) {

                TreeNode* temp = q.front();
                q.pop();

                v.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            ans.push_back(v);
        }

        return ans;
    }
};

int main() {

    // Create a sample binary tree:
    //
    //          3
    //         / \
    //        9   20
    //           /  \
    //          15   7

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution obj;

    vector<vector<int>> result = obj.levelOrder(root);

    // Print the result
    for (auto level : result) {

        cout << "[";

        for (int i = 0; i < level.size(); i++) {

            cout << level[i];

            if (i != level.size() - 1)
                cout << ", ";
        }

        cout << "] ";
    }

    return 0;
}