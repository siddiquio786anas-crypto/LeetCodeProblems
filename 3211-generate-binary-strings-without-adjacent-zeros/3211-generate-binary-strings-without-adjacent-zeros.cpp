class Solution {
public:
    void solve(int n,string op,vector<string>&ans){
        if(op.length()==n){
            ans.push_back(op);
            return;
        }
        op.push_back('1');
        solve(n,op,ans);
        op.pop_back();
        if(op.length()==0 || op.back()!='0'){
            op.push_back('0');
            solve(n,op,ans);
            op.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        solve(n,"",ans);
        return ans;
    }
};