class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>c(256,0);
        int i=0,j=0,l=0;
        while(j<s.size()){
            while(c[s[j]]){
                c[s[i]]=0;
                i++;
            }
            c[s[j]]=1;
            l=max(l,j-i+1);
            j++;
        }
        return l;
    }
};