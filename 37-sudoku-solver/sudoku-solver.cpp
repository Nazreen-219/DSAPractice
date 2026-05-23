class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char dig){

        // horizontal
        for(int i = 0; i < 9; i++){
            if(board[row][i] == dig){
                return false;
            }
        }

        // vertical
        for(int i = 0; i < 9; i++){
            if(board[i][col] == dig){
                return false;
            }
        }

        // 3x3 grid
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;

        for(int i = srow; i < srow + 3; i++){
            for(int j = scol; j < scol + 3; j++){

                if(board[i][j] == dig){
                    return false;
                }
            }
        }

        return true;
    }

    bool helper(vector<vector<char>>& board, int row, int col){

        if(row == 9){
            return true;
        }

        int nextRow = row;
        int nextCol = col + 1;

        if(nextCol == 9){
            nextRow = row + 1;
            nextCol = 0;
        }

        // skip filled cells
        if(board[row][col] != '.'){
            return helper(board, nextRow, nextCol);
        }

        for(char d = '1'; d <= '9'; d++){

            if(isSafe(board, row, col, d)){

                board[row][col] = d;

                if(helper(board, nextRow, nextCol)){
                    return true;
                }

                // backtracking
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {

        helper(board, 0, 0);
    }
};