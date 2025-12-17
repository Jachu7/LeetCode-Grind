class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        std::vector<int> output(n, 0);
        std::stack<int> stack;
        int prev_time = 0;

        for (int i = 0; i < logs.size(); i++) {
            int first = logs[i].find(':');
            int second = logs[i].find(':', first + 1);

            int id = std::stoi(logs[i].substr(0, first));
            std::string type = logs[i].substr(first + 1, second - first - 1);
            int time = std::stoi(logs[i].substr(second + 1));


            if (type == "start") {
                if (!stack.empty()) {
                    output[stack.top()] += time - prev_time;
                }
                stack.push(id);
                prev_time = time;
            }
            else {
                int finished = stack.top();
                stack.pop();
                output[finished] += time - prev_time + 1;
                prev_time = time + 1;
            }
        }
        return output;
    }
};
