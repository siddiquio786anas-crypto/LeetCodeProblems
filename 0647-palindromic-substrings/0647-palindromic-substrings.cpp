class Solution {
public:
    int checkpd(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int centre=0;centre<s.length();centre++){
            int i=centre;
            int j=centre;
            int oddpd=checkpd(s,i,j);
            i=centre;
            j=centre+1;
            int evenpd=checkpd(s,i,j);
            count=count+oddpd+evenpd;
        }
        return count;
    }
};