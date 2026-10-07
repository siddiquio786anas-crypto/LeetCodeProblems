class Solution {
public:
    bool safe(int x,int y,vector<string>&board,int n){
        int row,col;
        row=x-1;
        col=y;
        while(row>=0){
            if(board[row][col]=='Q')return false;
            row--;
        }
        row=x;
        col=y;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q')return false;
            row-=1;
            col-=1;
        }
        row=x;
        col=y;
        while(row>=0 && col<n){
            if(board[row][col]=='Q')return false;
            row-=1;
            col+=1;
        }
        return true;
    }
    void solve(int row,int n,vector<string>& board,vector<vector<string>>& ans) {
        if(row==n){
            ans.push_back(board);
            return;
        }
        for (int col=0;col<n;col++) {
            if (safe(row,col,board,n)) {
                board[row][col]='Q';
                solve(row+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        solve(0,n,board,ans);
        return ans;
    }
};