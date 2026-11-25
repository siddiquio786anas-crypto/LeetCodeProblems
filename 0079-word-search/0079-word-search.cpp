class Solution {
public:
    bool solve(vector<vector<char>>& board, string& word,
               int i, int j, int index,
               vector<vector<bool>>& visited) {

        int m = board.size();
        int n = board[0].size();

        if (i < 0 || j < 0 || i >= m || j >= n) return false;
        if (visited[i][j] || board[i][j] != word[index])return false;

        if (index == word.size() - 1)return true;

        visited[i][j] = true;

        bool found =
            solve(board, word, i + 1, j, index + 1, visited) || // Down
            solve(board, word, i - 1, j, index + 1, visited) || // Up
            solve(board, word, i, j + 1, index + 1, visited) || // Right
            solve(board, word, i, j - 1, index + 1, visited);  // Left
        visited[i][j] = false;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(solve(board, word, i, j, 0, visited))return true;
            }
        }
        return false;
    }
};