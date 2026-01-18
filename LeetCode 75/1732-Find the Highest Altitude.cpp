class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0;
        int highest = 0;

        for (const auto &g : gain) {
            current += g;
            highest = std::max(highest, current);
        }

        return highest;
    }
};
