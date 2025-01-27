class Solution {
    public String tictactoe(int[][] moves) {
        char[][] board = new char[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
        
        for (int i = 0; i < moves.length; i++) {
            int row = moves[i][0];
            int col = moves[i][1];
            board[row][col] = (i % 2 == 0) ? 'X' : 'O';
            if (checkWinner(board, row, col)) {
                return (i % 2 == 0) ? "A" : "B";
            }
        }
        
        return moves.length == 9 ? "Draw" : "Pending";
    }

    private boolean checkWinner(char[][] board, int row, int col) {
        char player = board[row][col];
        return (board[row][0] == player && board[row][1] == player && board[row][2] == player) ||
               (board[0][col] == player && board[1][col] == player && board[2][col] == player) ||
               (board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
               (board[0][2] == player && board[1][1] == player && board[2][0] == player);
    }
}
