class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = llabs(dividend);
        long long b = llabs(divisor);

        long long q = a / b;

        if((dividend < 0) ^ (divisor < 0))
            q = -q;

        return (int)q;
    }
};

