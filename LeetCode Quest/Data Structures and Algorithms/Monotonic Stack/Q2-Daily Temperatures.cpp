class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::stack<int> stack;
        std::vector<int> output(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            while (stack.size() > 0 && temperatures[i] > temperatures[stack.top()]) {
                output[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }

        return output;
    }
};
