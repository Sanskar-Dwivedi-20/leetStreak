class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count =0;
        int n = nums.size();
        int mid = nums[n/2];
        for(int num:nums){
            count += abs(mid -num);
        }
        return count;
    }
};