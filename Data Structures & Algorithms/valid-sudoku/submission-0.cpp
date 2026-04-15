class Solution {
   public:
   bool solve(vector<vector<char>>&board,int row,int col,char ch){
    for(int i=0;i<9;i++){
        if(i != col && board[row][i]==ch){
            return false;
        }
        if(i != row && board[i][col]==ch){
            return false;
        }
        int r = 3*(row/3)+i/3;
        int c = 3*(col/3)+i%3;
        if((r != row || c != col) && board[r][c]==ch){
            return false;
        }
    }
    return true;
   }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != '.') {
                    char ch = board[i][j];
                    if (!solve(board, i, j, ch)) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};