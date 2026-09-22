class Solution {
public:
    void solve(vector<int>& nums, vector<int>& op,vector<vector<int>>& ans, int i) {
        ans.push_back(op);
        for(int j=i;j<nums.size();j++) {
            if(j>i&&nums[j]==nums[j-1])
                continue;
            op.push_back(nums[j]);
            solve(nums,op,ans,j+1);
            op.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int>op;
        solve(nums,op,ans,0);
        return ans;
    }
};