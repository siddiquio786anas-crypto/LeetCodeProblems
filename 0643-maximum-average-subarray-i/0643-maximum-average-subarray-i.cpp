class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int mx=sum;
        for(int i=k;i<n;i++){
          sum = sum - nums[i-k] + nums[i];

            mx= max(mx, sum);
        }

        return (double)mx / k;
        
    }
};