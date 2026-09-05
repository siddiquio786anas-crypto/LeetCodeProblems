class Solution {
public:
    void solve(vector<int>& nums, int i, vector<int>& op,vector<vector<int>>& ans){
        if(i>=nums.size()){
            ans.push_back(op);
            return;
        }
        op.push_back(nums[i]);
        solve(nums,i+1,op,ans);
        op.pop_back();
        solve(nums,i+1,op,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        int i=0;
        solve(nums,i,op,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};