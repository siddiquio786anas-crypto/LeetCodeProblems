class Solution {
public:
    void createmp(unordered_map<char,char>&mp,string key){
        char s='a';
        for(int i=0;i<key.length();i++){
            char ch=key[i];
            if(mp.find(ch)==mp.end()){
                mp[ch]=s;
                s++;
            }
        }
    }
    string usemp(unordered_map<char,char>&mp,string message){
        string str="";
        for(int i=0;i<message.length();i++){
            char ch=message[i];
            char mpch=mp[ch];
            str.push_back(mpch);
        }
        return str;
    }
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char space=' ';
        mp[space]=space;
        createmp(mp,key);
        string ans =usemp(mp,message);
        return ans;
    }  
};