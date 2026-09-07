class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int cnd=0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                cnd=nums[i];
            }
            if(nums[i]==cnd){
                c++;
            }
            else{
                c--;
            }
        }
        return cnd;
    }
};