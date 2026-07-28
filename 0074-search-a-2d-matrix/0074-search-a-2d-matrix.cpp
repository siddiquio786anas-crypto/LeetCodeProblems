class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int t=r*c;
        int s=0;
        int e=t-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int ri=mid/c;
            int ci=mid%c;
            if(matrix[ri][ci]==target){
                return true;
            }
            if(target>matrix[ri][ci]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
        return false;
    }
};