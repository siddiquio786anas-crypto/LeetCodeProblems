class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>ans;
        vector<int>sm;
        vector<int>lg;
       sort(nums.begin(),nums.end());
       int mid=(nums.size()+1)/2;
       for(int i=0;i<nums.size();i++){
        if(i<mid){
            sm.push_back(nums[i]);
        }
        else{
            lg.push_back(nums[i]);
        }
       }
        reverse(sm.begin(),sm.end());
        reverse(lg.begin(),lg.end());
        for(int i=0;i<mid;i++){
            ans.push_back(sm[i]);
            if(i<lg.size())
                ans.push_back(lg[i]);
        }
        nums=ans;
    }
};