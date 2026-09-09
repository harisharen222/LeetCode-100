class Solution {
public:
    void solve(string curr, int open, int close, vector<string>& ans, int n){
        if(open == n && close == n){
            ans.push_back(curr);
            return;
        }
        if(open < n){
            curr.push_back('(');

            solve(curr,open+1,close,ans,n);
            curr.pop_back();
        }
        if(close < open){
            curr.push_back(')');

            solve(curr,open,close+1,ans,n);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
        string curr = "";
        solve(curr,0,0,ans,n);
        return ans;

    }
};