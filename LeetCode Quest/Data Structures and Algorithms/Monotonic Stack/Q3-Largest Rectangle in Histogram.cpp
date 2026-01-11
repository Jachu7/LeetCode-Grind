class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxP = 0;
        std::stack<int> s;

        heights.push_back(0);

        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && heights[s.top()] > heights[i]) {
                int h = heights[s.top()];
                s.pop();

                int R = i;
                int L;

                if (s.empty()) {
                    L = -1;
                } else {
                    L = s.top();
                }

                int w = R - L - 1;

                maxP = std::max(maxP, w * h);
            }
            s.push(i);
        }

        return maxP;
    }
};
