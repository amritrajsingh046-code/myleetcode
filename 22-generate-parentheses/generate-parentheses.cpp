class Solution {
public:
    string curr = "";
    vector<string> ans;
    void solve(int open, int close,int n) {
        if (open == n && close == n) {
            ans.push_back(curr);
            return;
        }
        if (open < n) {
            curr.push_back('(');
            solve(open + 1, close,n);
            curr.pop_back();
        }
        if (close < open) {
            curr.push_back(')');
            solve(open, close + 1,n);
            curr.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        curr="";
        ans.clear();
        solve(0,0,n);
        return ans;
    }
};