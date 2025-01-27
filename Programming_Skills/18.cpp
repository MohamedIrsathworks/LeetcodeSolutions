class Solution {
    public int maximumWealth(int[][] accounts) {
        int len1 = accounts.length; 
        int len2 = accounts[0].length; 
        int[] wealth = new int[len1];
        
        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {  
                wealth[i] += accounts[i][j];
            }
        }

        int temp = 0;
        for (int i = 0; i < len1; i++) {
            if (temp < wealth[i]) {
                temp = wealth[i];
            }
        }

        return temp;
    }
}
