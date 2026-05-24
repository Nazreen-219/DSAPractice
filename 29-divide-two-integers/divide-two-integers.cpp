class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long long a = dividend;
        long long b = divisor;

        int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;

        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long quotient = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while ((temp << 1) <= a) {
                temp = temp << 1;
                multiple = multiple << 1;
            }

            a = a - temp;
            quotient = quotient + multiple;
        }

        if (sign < 0) quotient = -quotient;

        return (int)quotient;
    }
};