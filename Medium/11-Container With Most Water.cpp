class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int area = 0;
        int leftPointer = 0;
        int rightPointer = height.size() - 1;
        int distance = 0;
        // distance = abs(rightPointer - leftPointer);
        while (leftPointer < rightPointer) {
            distance = abs(rightPointer - leftPointer);
            area = distance * std::min(height[leftPointer], height[rightPointer]);
            std::cout << area << std::endl;
            if (area > maxArea) {
                maxArea = area;
            }
            if (height[leftPointer] < height[rightPointer]) {
                leftPointer++;
            }
            else {
                rightPointer--;
            }
        }
        return maxArea;
    }
};
