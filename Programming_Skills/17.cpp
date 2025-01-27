class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, direction = 0;
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        for (char move : instructions) {
            if (move == 'G') {
                x += directions[direction][0];
                y += directions[direction][1];
            } else if (move == 'L') {
                direction = (direction + 3) % 4;
            } else if (move == 'R') {
                direction = (direction + 1) % 4;
            }
        }
        
        return (x == 0 && y == 0) || direction != 0;
    }
};
