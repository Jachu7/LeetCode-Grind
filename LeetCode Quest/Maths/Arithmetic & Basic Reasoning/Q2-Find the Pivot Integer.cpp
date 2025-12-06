class Solution {
    int sumBetween(int a, int b) {
        int sum = 0;
        for (int i = a; i <= b; ++i) {
            sum += i;
        }
        return sum;
    }
public:
    int pivotInteger(int n) {
        std::vector<int> befores;
        std::vector<int> afters;

        for (int i = 1; i <= n; ++i) {
            befores.push_back(sumBetween(1, i));
        }
        for (int i = n; i >= 1; --i) {
            afters.push_back(sumBetween(i, n));
        }
        for (int i = 0; i < n; ++i) {
            if (befores[i] == afters[n-i-1]) {
                return i+1;
                break;
            }
        }
        return -1;
    }
};
