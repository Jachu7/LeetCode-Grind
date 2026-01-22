class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        std::string result = "";
        std::string s1s2 = str1 + str2;
        std::string s2s1 = str2 + str1;

        if (s1s2 == s2s1) {
            result = s1s2.substr(0, std::gcd(str1.size(), str2.size()));
        } else {
            result = "";
        }
        return result;
    }
};
