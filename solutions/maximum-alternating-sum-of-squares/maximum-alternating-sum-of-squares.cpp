class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int l = nums.size()/2;
        for( int i =0; i<nums.size(); i++){
            nums[i] *=nums[i];
        }

        sort(nums.begin(), nums.end());
        long long maxSum=0;
        for(int i= 0; i<nums.size(); i++){
            if(i<l) maxSum -= nums[i];
            else maxSum += nums[i];
        }
        return maxSum;
    }
};