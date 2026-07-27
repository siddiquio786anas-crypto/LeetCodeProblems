class Solution {
public:
    int pivotIndex(vector<int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(s==e){
                return mid;
            }
            if(mid+1<n && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]<nums[s]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    int binarySearch(vector<int>& nums,int s,int e,int target){
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot=pivotIndex(nums);
        if(target>=nums[0] && target<=nums[pivot]){
            int ans=binarySearch(nums,0,pivot,target);
            return ans;
        }
        else{
            int ans=binarySearch(nums, pivot+1 ,n-1, target);
            return ans;
        }
        return -1;

        }
};