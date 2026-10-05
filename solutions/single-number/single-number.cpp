class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp = 0;
        for (int n : nums){
            temp ^= n;
        }
    return temp;
    }
};