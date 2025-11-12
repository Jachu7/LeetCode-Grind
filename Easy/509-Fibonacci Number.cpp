class Solution {
public:
    int F(int num) {
        if (num == 0) return 0;
        if (num == 1) return 1;
        else return F(num - 1) + F(num - 2);
    }
    int fib(int n) {
        return F(n);
    }
};
