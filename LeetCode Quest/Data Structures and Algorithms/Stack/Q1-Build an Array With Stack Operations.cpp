class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        std::vector<std::string> output;
        int index = 0;
        for (int i = 1; i <= n; i++) {
            if (index == target.size()) {
                break;
            }
            output.push_back("Push");

            if (target[index] == i) {
                index++;
            }
            else {
                output.push_back("Pop");
            }
        }
        return output;
    }
};
