class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int lm,rm=0;
        int water=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]>=lm){
                    lm=height[l];
                }
                else {
                    water += lm - height[l];
                }
                l++;
            } 
            else {
                if (height[r] >= rm) {
                    rm= height[r];
                } 
                else {
                    water += rm - height[r];
                }
                r--;
            }
        }

        return water;
        // for(int i=0;i<height.size();i++){
        //     int lm=0;
        //     int rm=0;
        //     for(int j=0;j<=i;j++){
        //         lm=max(lm,height[j]);
        //     }
        //     for(int j=i;j<height.size();j++){
        //         rm=max(rm,height[j]);
        //     }
        //     water+=min(lm,rm)-height[i];
        // }
        // return water;
    }
};