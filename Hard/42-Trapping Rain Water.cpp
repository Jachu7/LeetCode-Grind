//319 / 324 testcases passed (my first implementation)

class Solution {
public:
    int trap(vector<int>& height) {
        vector<vector<char>> filled2d = {};
        int actual, temp_water = 0, result = 0;
        bool flag = false;
        for (int i = 0; i < height.size(); i++) {
            filled2d.push_back({});
        }
        int maxValue = *max_element(height.begin(), height.end());

        for(int i = 0; i < height.size(); i++) {
            for(int j = 0; j < maxValue; j++) {
                if (height[i] > j) {
                    filled2d[i].push_back('*');
                } else {
                    filled2d[i].push_back('e');
                }
            }
        }

        for (int i = 0; i < maxValue; i++) {
            temp_water = 0;
            flag = false;
            for (int j = 0; j < filled2d.size(); j++) {
                if (filled2d[j][i] == '*' && flag == false) {
                    flag = true;
                }
                if (filled2d[j][i] == 'e' && flag == true) {
                    temp_water++;
                }
                if (filled2d[j][i] == '*' && flag == true) {
                    result += temp_water;
                    temp_water = 0;
                }
            }
        }
        return result;
    }
};

// actual solution (Gemini 2.5 pro gave me an idea, I did it by myself. This was too hard for me:( I had no clue what to do)

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left_max(height.size());
        vector<int> right_max(height.size());
        int result = 0;

        if (height.size() == 0) {
            return 0;
        }

        left_max[0] = height[0];
        for (int i = 1; i < height.size(); i++) {
            left_max[i] = max(left_max[i - 1], height[i]);
        }
        right_max[height.size() - 1] = height[height.size() - 1];
        for (int i = height.size() - 2; i >= 0; i--) {
            right_max[i] = max(right_max[i + 1], height[i]);
        }

        for (int i = 0; i < height.size(); i++) {
            int water_level = min(left_max[i], right_max[i]);
            result += water_level - height[i];
        }
        return result;
    }
};

