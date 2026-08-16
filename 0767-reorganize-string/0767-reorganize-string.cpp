class Solution {
public:
    string reorganizeString(string s) {
        int mp[256]={0};
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        char maxfrqch;
        int maxfrq=INT_MIN;
        for(int i='a';i<='z';i++){
            if(mp[i]>maxfrq){
                maxfrq=mp[i];
                maxfrqch=i;
            }
        }
        if(maxfrq>(s.size()+1)/2)
            return "";

        int index=0;
        while(maxfrq>0 && index<s.size()){
            s[index]=maxfrqch;
            maxfrq--;
            index+=2;
        }
        mp[maxfrqch]=0;
        for(int i='a';i<='z';i++){
            while(mp[i]>0){
                index=index>=s.size()?1:index;
                s[index]=i;
                mp[i]--;
                index+=2;
            }
        }
        return s;
    }

};