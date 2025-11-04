class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> ssigns;
        map<char, int> tsigns;
        if (s.length() != t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            ssigns[s[i]] += 1;
            tsigns[t[i]] += 1;
        }
        
        return ssigns == tsigns;
    }
};
