class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;
        int i = 0;
        while (i < tokens.size()) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/" ) {
                stack.push(std::stoi(tokens[i]));
            }
            else {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();

                if (tokens[i] == "+") {
                    stack.push(a + b);
                }
                else if (tokens[i] == "-") {
                    stack.push(b - a);
                }
                else if (tokens[i] == "*") {
                    stack.push(a * b);
                }
                else if (tokens[i] == "/") {
                    stack.push(b / a);
                }
            }
            i++;
        }
        return stack.top();
    }
};
