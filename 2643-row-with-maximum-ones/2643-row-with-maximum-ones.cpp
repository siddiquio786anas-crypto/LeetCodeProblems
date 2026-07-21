class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans;
        int Onecount=INT_MIN;
        int rowIndex=0;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>Onecount){
            Onecount=count;
            rowIndex=i;
            }
        }
        ans.push_back(rowIndex);
        ans.push_back(Onecount);
        return ans;
        
    }
};