class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string prefix = "";
        bool flag = true;

        for (int i=0; i<strs[0].size(); i++) {
            for (int j=1; j<strs.size(); j++) {
                try {
                    if (strs[0][i] == strs[j][i]) {
                        flag = true;
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
                catch (std::exception& e) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                prefix += strs[0][i];
            }
            else{
                break;
            }
        }
        return prefix;
    }
};
