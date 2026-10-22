class Solution {
public:
    int minimumSum(int num) {
        int d[4];
        d[0] = num /1000;
        d[1] = (num /100) % 10;
        d[2] = (num /10) % 10;
        d[3] = num % 10;
        sort(d, d+4);
        int a = d[0] *10 + d[2];
        int b = d[1] *10 + d[3];
        return a+b;
    }
};