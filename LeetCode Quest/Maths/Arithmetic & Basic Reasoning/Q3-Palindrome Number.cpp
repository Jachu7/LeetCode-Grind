class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {
            return false;
        }
        std::string y = std::to_string(x);
        std::string z = std::to_string(x);
        std::reverse(y.begin(), y.end());
        if (z == y){
            return true;
        }
        return false;
    }
};
