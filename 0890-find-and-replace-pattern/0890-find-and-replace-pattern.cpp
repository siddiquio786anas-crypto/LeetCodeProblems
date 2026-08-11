class Solution {
public:
    string ns(string &str){
        unordered_map<char,char>mp;
        char s='a';
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(mp.find(ch)==mp.end()){
                mp[ch]=s;
                s++;
            }
        }
        string ansstring="";
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            char mpch=mp[ch];
            ansstring.push_back(mpch);
        }
        return ansstring;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        string np=ns(pattern);
        for(int i=0;i<words.size();i++){
            string cw=words[i];
            string ncw=ns(cw);
            if(np==ncw){
                ans.push_back(cw);
            }
        }
        return ans;
    }

};