class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        std::vector<int> output;
        bool flag = false;

        for (int i = 0; i < prices.size(); i++) {
            flag = false;
            std::cout << prices[i] << std::endl;
            for (int j = 0; j < prices.size()-i-1; j++) {
                std::cout << prices[j+i+1] << " ";
                if (prices[i] >= prices[j+i+1]) {
                    output.push_back(prices[i] - prices[j+i+1]);
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                output.push_back(prices[i]);
            }
            std::cout << std::endl;
        }
        return output;
    }
};
