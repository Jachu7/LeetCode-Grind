class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag = true;
        int i = 0, j = 0;
        while (i < s.size()) {
            if (j >= t.size()) {
                flag = false;
                break;
            }
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return flag;
    }
};
