class Solution {
    public boolean checkStraightLine(int[][] c) {
        int x0 = c[0][0], y0 = c[0][1];
        int x1 = c[1][0], y1 = c[1][1];
        int dx = x1 - x0;
        int dy = y1 - y0;
        for (int i = 2; i < c.length; i++) {
            int x = c[i][0], y = c[i][1];
            if ((y - y0) * dx != (x - x0) * dy) {
                return false;
            }
        }
        return true;
    }
}
