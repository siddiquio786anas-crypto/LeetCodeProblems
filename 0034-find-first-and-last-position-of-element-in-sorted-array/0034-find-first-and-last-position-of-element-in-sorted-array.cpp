class Solution {
public:
    int firstOc(vector<int>&nums,int target){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    int lastoc(vector<int>&nums,int target){
     int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        result.push_back(firstOc(nums,target));
        result.push_back(lastoc(nums,target));
        return result;
    }
};