#include <vector>
#include <algorithm>

class Solution {
private:
    std::vector<std::vector<int>> output;

    void search(int goal, int startingIndex, std::vector<int> currentArray, const std::vector<int>& candidates) {
        if (goal == 0) {
            output.push_back(currentArray);
            return;
        }
        if (goal < 0) {
            return;
        }
        
        for (int i = startingIndex; i < candidates.size(); i++) {
            currentArray.push_back(candidates[i]);
            search(goal - candidates[i], i, currentArray, candidates); 
            currentArray.pop_back();
        }
    }

public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        search(target, 0, {}, candidates);
        return output;
    }
};
