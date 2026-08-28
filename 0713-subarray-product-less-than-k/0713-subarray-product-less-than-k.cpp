class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int s=0,e=0;
        int c=0;
        int p=1;
        while(e<nums.size()){
            p*=nums[e];
            while(p>=k && s<=e){
                p/=nums[s];
                s++;
            }
            c+=1+(e-s);
            e++;
        }
        return c;
    }
};