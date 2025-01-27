class Solution {
    public int diagonalSum(int[][] mat) {
        int len1 = mat.length;
        int sum = 0;
        
        for (int i = 0; i < len1; i++) {
            sum += mat[i][i];
            sum += mat[i][len1 - i - 1];
        }
        
        if (len1 % 2 == 1) {
            sum -= mat[len1 / 2][len1 / 2];
        }

        return sum;
    }
}
