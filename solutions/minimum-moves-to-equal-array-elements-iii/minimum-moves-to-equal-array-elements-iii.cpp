class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        int count = 0;
        for(int num : nums){
            if(num < nums[n]) {
                count += abs(num - nums[n]);
            }
        }
        return count;
    }
};