class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans =0;;
        int sum =0;
        int pro =1;
        int temp =0;
        while(n != 0){
            temp = n % 10;
            n /= 10;
            sum += temp;
            pro *= temp;
        }
        return pro - sum ;
    }
};