class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element = 0;
        int digit = 0;

        for(int num : nums){
            element += num;

            while(num){
                digit += num % 10;
                num /= 10;
            }
        }
        return abs(element - digit);
    }
};