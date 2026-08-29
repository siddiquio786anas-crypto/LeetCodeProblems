class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cp=0;
        int cn=0;
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<0){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        cn=s;
        s=0;
        e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<=0){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        cp=nums.size()-s;
        return max(cp,cn);
    }
};