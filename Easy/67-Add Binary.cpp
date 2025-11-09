class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        bool flag = false;
        int temp;

        if (a.length() > b.length()) {
            b.insert(b.begin(), a.length() - b.length(), '0');
        }
        if (b.length() > a.length()) {
            a.insert(a.begin(), b.length() - a.length(), '0');
        }
        for (int i = a.size() - 1; i >= 0; i--) {
            temp = (a[i] - '0') + (b[i] - '0') + (flag ? 1 : 0);
            if (temp == 0) {
                flag = false;
                result.insert(0, "0");
            }
            if (temp == 1) {
                flag = false;
                result.insert(0, "1");
            }
            if (temp == 2) {
                flag = true;
                result.insert(0, "0");
            }
            if (temp == 3) {
                flag = true;
                result.insert(0, "1");
            }
        }
        if (flag) {
            result.insert(0, "1");
        }
        return result;
    }
};
