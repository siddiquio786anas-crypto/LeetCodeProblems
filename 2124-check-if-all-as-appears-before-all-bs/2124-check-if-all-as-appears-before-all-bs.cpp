class Solution {
public:
    bool checkString(string s) {
        bool isB=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                isB=true;
            }
            else if(s[i]=='a' && isB){
                return false;
            }
        }
        return true;
    }
};