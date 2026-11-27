class Solution {
public:
    bool hasAlternatingBits(int n) {
        int i=0;
        int bit=0;
        while(n>0){
            int curBit=n%2;
            if(i>0 && (bit==curBit))return false;
            n/=2;
            bit=curBit;
            i++;
        }
        return true;
    }
};