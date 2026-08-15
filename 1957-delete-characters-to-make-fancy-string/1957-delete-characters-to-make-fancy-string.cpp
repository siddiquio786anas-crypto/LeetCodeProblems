class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ans.size()>=2 && ans[ans.size()-1]==ch && ans[ans.size()-2]==ch){
                continue;
            }
            ans.push_back(ch);
        }
        return ans;
    }
};