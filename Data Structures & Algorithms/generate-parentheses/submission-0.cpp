class Solution {
public:
    void backtracking(int openN, int closeN, int n, vector<string> &ans, string &bracket) {

        if(openN == closeN && openN == n) {
            ans.push_back(bracket);
            return;
        }

        if(openN < n) {
            bracket.push_back('(');
            backtracking(openN+1, closeN, n, ans, bracket);
            bracket.pop_back();
        }

        if(closeN < openN) {
            bracket.push_back(')');
            backtracking(openN, closeN+1, n, ans, bracket);
            bracket.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string bracket;
        backtracking(0,0,n,ans,bracket);

        return ans;
    }
};
