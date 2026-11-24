class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int maxVal = 0;
        int maxLcm = 1;
        for (int x : nums) {
            maxVal=max(maxVal,x);
            maxLcm=lcm(maxLcm,x);
        }
        long long limit=1LL*maxVal*maxLcm;

        for (int i=0;i<n;i++) {
            long long product = 1;
            int g=0;
            int l=1;
            for (int j=i;j<n;j++) {
                product*=nums[j];
                g=gcd(g,nums[j]);
                l=lcm(l,nums[j]);
                if (product == 1LL * g * l) {
                    ans = max(ans, j - i + 1);
                }
                if (product > limit) {
                    break;
                }
            }
        }
        return ans;
    }
};