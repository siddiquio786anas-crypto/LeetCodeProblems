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
    int solve(int row,int n,vector<string>& board) {
        if(row==n){
            return 1;
        }
        int count=0;
        for (int col=0;col<n;col++) {
            if (safe(row,col,board,n)) {
                board[row][col]='Q';
                count= count+solve(row+1,n,board);
                board[row][col]='.';
            }
        }
        return count;
    }
    int totalNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        
        return solve(0,n,board);
    }
};

  