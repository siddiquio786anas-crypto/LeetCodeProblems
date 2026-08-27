class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int s=0;
        int c=0;
        int rem=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            rem=s%k;
            if(rem<0)
                rem+=k;
            if(mp.find(rem)!=mp.end()){
                c+=mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem]=1;
            }
        }
        return c;
    }
};