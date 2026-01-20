class Solution {
public:
    int compress(vector<char>& chars) {
        std::vector<char> output;
        char current = chars[0];
        int count = 0;
        int i = 0;
        std::string numberS;

        while (i < chars.size()) {
            if (chars[i] == current) {
                count++;
            } else {
                if (count > 1) {
                    output.push_back(current);
                    numberS = std::to_string(count);
                    for (char c : numberS) {
                        output.push_back(c);
                    }
                } 
                else {
                    output.push_back(current);
                }
                current = chars[i];
                count = 1;
            }
            i++;
        }

        if (count > 1) {
            output.push_back(current);
            numberS = std::to_string(count);
            for (char c : numberS) {
                output.push_back(c);
            }
        } 
        else {
            output.push_back(current);
        }
        chars = output;

        return chars.size();
    }
};
