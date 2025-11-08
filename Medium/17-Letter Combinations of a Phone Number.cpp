class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map <int, string> my_map{
        {2,"abc"},
        {3,"def"},
        {4,"ghi"},
        {5,"jkl"},
        {6,"mno"},
        {7,"pqrs"},
        {8,"tuv"},
        {9,"wxyz"}};
        vector<string> output;
        string temp;

        for (int i = 0; i < my_map.at(digits[0]-'0').size(); i++) {
            if (digits.length()>1) {
                for (int j = 0; j < my_map.at(digits[1]-'0').size(); j++) {
                    if (digits.length()>2) {
                        for (int k = 0; k < my_map.at(digits[2]-'0').size(); k++) {
                            if (digits.length()>3) {
                                for (int l = 0; l < my_map.at(digits[3]-'0').size(); l++) {
                                    temp = "";
                                    temp += my_map.at(digits[0]-'0')[i];
                                    temp += my_map.at(digits[1]-'0')[j];
                                    temp += my_map.at(digits[2]-'0')[k];
                                    temp += my_map.at(digits[3]-'0')[l];
                                    output.push_back(temp);
                                    temp.clear();
                                }
                            }
                            else {
                                temp = "";
                                temp += my_map.at(digits[0]-'0')[i];
                                temp += my_map.at(digits[1]-'0')[j];
                                temp += my_map.at(digits[2]-'0')[k];
                                output.push_back(temp);
                            }   temp.clear();
                        }
                    }
                    else {
                        temp = "";
                        temp += my_map.at(digits[0]-'0')[i];
                        temp += my_map.at(digits[1]-'0')[j];
                        output.push_back(temp);
                        temp.clear();
                    }
                }
            }
            else {
                temp = "";
                temp += my_map.at(digits[0]-'0')[i];
                output.push_back(temp);
                temp.clear();
            }
        }
        return output;
    }
};
