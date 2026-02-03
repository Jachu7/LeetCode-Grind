class Solution {
public:
    int maxVowels(string s, int k) {
            std::vector<char> vov{'a', 'e', 'i', 'o', 'u'};
        int vovCounter = 0;
        int output = 0;

        for (int i = 0; i < k; i++) {
            if (std::find(vov.begin(), vov.end(), s[i]) != vov.end()) {
                vovCounter++;
            }
        }
        output = vovCounter;

        for (int i = k; i < s.size(); i++) {
            if (std::find(vov.begin(), vov.end(), s[i - k]) != vov.end()) {
                vovCounter--;
            }
            if (std::find(vov.begin(), vov.end(), s[i]) != vov.end()) {
                vovCounter++;
            }
            if (vovCounter > output) {
                output = vovCounter;
            }
        }
        return output;
    }
};
