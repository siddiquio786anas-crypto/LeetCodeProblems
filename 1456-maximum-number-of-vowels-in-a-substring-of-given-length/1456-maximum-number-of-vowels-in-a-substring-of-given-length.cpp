class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                cnt++;
            }
        }
        int ans=cnt;
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i]))
                cnt++;
            if(isvowel(s[i-k]))
                cnt--;
            ans=max(ans,cnt);
        }
        return ans;

    }  
    
}; 