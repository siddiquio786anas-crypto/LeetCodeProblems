class Solution {
public:
    void solve(vector<int>&nums,int i,vector<int>&op,vector<vector<int>>&ans){
        if(i>=nums.size()){
            ans.push_back(op);
            return;
        }
        //not pick:-
        solve(nums,i+1,op,ans);
        //pick:-
        op.push_back(nums[i]);
        solve(nums,i+1,op,ans);
        op.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>op;
        solve(nums,0,op,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};