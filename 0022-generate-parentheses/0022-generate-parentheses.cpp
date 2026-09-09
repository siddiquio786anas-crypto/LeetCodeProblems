class Solution {
public:
    void solve(string s,int open,int close,int n,vector<string>&ans){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0){
            solve(s+"(",open-1,close,n,ans);
        }
        if(close>open){
            solve(s+")",open,close-1,n,ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string op="";
        solve(op,n,n,n,ans);
        return ans;
    }
};