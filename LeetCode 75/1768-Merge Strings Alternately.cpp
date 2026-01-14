class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = std::max(word1.length(), word2.length());
        std::string output = "";

        for (int i = 0; i < len; i++) {
            if (word1.length()>i) {
                output += word1[i];
            }
            if (word2.length()>i) {
                output += word2[i];
            }
        }
        return output;
    }
};
