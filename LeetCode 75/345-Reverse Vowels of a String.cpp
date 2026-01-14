class Solution {
public:
    string reverseVowels(string s) {
        std::string vov = "aeiouAEIOU";
        char temp;
        int i = 0;
        int j = s.length() - 1;
        while (i <= j) {
            if (vov.find(s[i]) == -1) {
                i++;
            }
            else if (vov.find(s[j]) == -1) {
                j--;
            }
            else if ((vov.find(s[i]) != -1) && (vov.find(s[j]) != -1)) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
        }
        return s;
    }
};
