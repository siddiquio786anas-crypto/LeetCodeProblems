class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        for(int i=0;i<s.length();i++){
            char a=s[i];
            char b=t[i];
            if(mp.count(a) && mp[a]!=b)
                return false;
            if(mp1.count(b) && mp1[b]!=a)
                return false;
            mp[a]=b;
            mp1[b]=a;
        }
        return true;
    }
};