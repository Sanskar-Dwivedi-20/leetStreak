// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         int quotient = 0;
//         bool negative = true;
//         if(dividend <0 || divisor < 0){
//             dividend = abs(dividend);
//             divisor = abs(divisor);
//             negative = false;
//         }

//         while(dividend>divisor){
//             dividend -= divisor;
//             quotient++;
//         }

//         if (negative == false) quotient = -quotient;
//         return quotient;
//     }
// };

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        bool negative = (dividend < 0) != (divisor < 0);
        long long quotient = 0;

        while(a >= b) {
            long long temp = b;
            long long multiple = 1;

            while(a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            quotient += multiple;
        }
        if(negative)
            quotient = -quotient;
        return quotient;
    }
};