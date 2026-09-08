class Solution {
public:
    int countCommas(int n) {
        if(abs(n)<=999)return 0;
        return(n-1000)+1;
    }
};