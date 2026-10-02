class Solution {
public:
    void generate(string current, int open, int close,
                  int n, vector<string>& result) {

        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            generate(current + "(", open + 1, close, n, result);
        }

        if (close < open) {
            generate(current + ")", open, close + 1, n, result);
        }
    }

    vector<string> generateParenthesis(int n) {
         vector<string> result;
        generate("", 0, 0, n, result);
        return result;
    }
};