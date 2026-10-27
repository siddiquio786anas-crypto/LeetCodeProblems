class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>&ans,int i){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        vector<bool>use(21,0);
        for(int j=i;j<nums.size();j++){
            if(use[nums[j]+10]==0){
                swap(nums[j],nums[i]);
                solve(nums,ans,i+1);
                swap(nums[j],nums[i]);
                use[nums[j]+10]=1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(nums,ans,0);
        return ans;
    }
};