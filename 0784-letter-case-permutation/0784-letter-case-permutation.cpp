class Solution {
public:
    void solve(string s,int i,string op,vector<string>&ans){
        if(i>=s.length()){
            ans.push_back(op);
            return;
        }
        char ch=s[i];
        if(isalpha(ch)){
            op.push_back(tolower(ch));
            solve(s,i+1,op,ans);
            op.pop_back();
            op.push_back(toupper(ch));
            solve(s,i+1,op,ans);
            op.pop_back();
        }
        else{
            op.push_back(ch);
            solve(s,i+1,op,ans);
            op.pop_back();
        }
        

    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string op="";
        solve(s,0,op,ans);
        return ans;
    }
};