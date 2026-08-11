string oc;
class Solution {
public:
    static bool cmp(char ch1,char ch2){
        return(oc.find(ch1)<oc.find(ch2));
    }
    string customSortString(string order, string s) {
        oc=order;
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};