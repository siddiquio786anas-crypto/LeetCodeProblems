class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int ts=0;
       int ls=0;
       for(int i=0;i<nums.size();i++){
        ts+=nums[i];
       }
       for(int i=0;i<nums.size();i++){
        int rs=ts-ls-nums[i];
        if(ls==rs)
            return i;
        ls+=nums[i];
       }
       return -1;
    }
};