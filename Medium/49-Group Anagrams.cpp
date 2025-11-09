class Solution {
public:
    bool is_anagram(string s1, string s2){
        if (s1.length() != s2.length()){
            return false;
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;

        if(strs.empty()) {
            return {{""}};
        }
        else {
            output.push_back({strs[0]});
            
            for (int i = 1; i < strs.size(); i++) {
                bool found = false;
                for (int j = 0; j < output.size(); j++) {
                    if (is_anagram(strs[i], output[j][0])) {
                        output[j].push_back(strs[i]);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    output.push_back({strs[i]});
                }
            }
            return output;
        }
    }
};
