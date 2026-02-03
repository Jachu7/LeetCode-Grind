class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0;
        int R = height.size() - 1;
        int biggestArea = 0;
        while (L < R) {
            int currentArea = std::min(height[L], height[R]) * (R - L);
            if (currentArea > biggestArea) {
                biggestArea = currentArea;
            }
            if (height[L] < height[R]) {
                L++;
            } else {
                R--;
            }
        }
        return biggestArea;
    }
};
