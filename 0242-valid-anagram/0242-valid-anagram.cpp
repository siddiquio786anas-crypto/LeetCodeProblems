class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>c;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            c[ch]++;
        }
        for(int i=0;i<t.length();i++){
            char ch=t[i];
            c[ch]--;
        }
        for(char ch='a';ch<='z';ch++){
            if(c[ch]!=0){
                return false;
            }
        }
        return true;
    }
};