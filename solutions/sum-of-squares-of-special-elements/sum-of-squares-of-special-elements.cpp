class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
       long long sum = 0;
       int l = nums.size();

       for(int i=0; i<=l ; i++) {
        if(l%(i+1)==0) sum += nums[i]*nums[i];
       }
       return sum;
    }
};