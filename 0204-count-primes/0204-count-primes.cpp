class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        int s=n/2;
        vector<bool>prime(s,true);
        int sqrr=sqrt(n);
        int ans=1;
        for(int i=3;i<=sqrr;i+=2){
            if(prime[i/2]){
                long long j=1LL*i*i;
                while(j<n){
                    prime[j/2]=false;
                    j+=2LL*i;
                }
            }
        }
        for(int i=3;i<n;i+=2){
            if(prime[i/2])
                ans++;
        }
        return ans;
    }
};