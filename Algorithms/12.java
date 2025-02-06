class Solution {
    public:
        int maxArea(vector<int>& height) {
            int left = 0, right = height.size() - 1;
            int maxArea = 0;
            
            while (left < right) {
                int h = min(height[left], height[right]);
                int width = right - left;
                maxArea = max(maxArea, h * width);
    
                if (height[left] < height[right])
                    left++;  
                else
                    right--; 
            }
            
            return maxArea;
        }
    };
    