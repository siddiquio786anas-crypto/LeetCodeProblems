class Solution {
public:
    bool ckfbk(vector<int>& piles, int h,int k){
        long long thktfb=0;
        for(int i=0;i<piles.size();i++){
            thktfb+=ceil(piles[i]/(double)k);
        }
        if(thktfb<=h)
            return true;
        return false;   
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int ans=0;
        int mpi=*max_element(piles.begin(),piles.end());
        int e=mpi;
        while(s<=e){
            int mid=s+(e-s)/2;
            int k=mid;
            if(ckfbk(piles,h,k)){
                ans=k;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};