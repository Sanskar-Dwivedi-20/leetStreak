class Solution {
public:
    int minMoves(vector<int>& nums) {
        int total =0;
        int min = nums[0];

        for(int num : nums){
            total += num;
            if(num < min) min = num;
        }
        
        int moves = total - nums.size() * min;
        return moves;
    }
};