class Solution {
public:
    int findmax(vector<vector<int>>& mat,int n,int m,int j){
        int max=INT_MIN;
        int index=-1;
        for(int i=0;i<n;i++){
            if(mat[i][j]>max){
                max=mat[i][j];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int s=0,e=m-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int mri=findmax(mat,n,m,mid);
            int left=mid-1>=0 ? mat[mri][mid-1]:INT_MIN;
            int right=mid+1<m ? mat[mri][mid+1]:INT_MIN;
            if(mat[mri][mid]>left && mat[mri][mid]>right)
                return{mri,mid};
            else if(mat[mri][mid]<left)
                e=mid-1;
            else
                s=mid+1;
        }
        return{};
    }
    
};