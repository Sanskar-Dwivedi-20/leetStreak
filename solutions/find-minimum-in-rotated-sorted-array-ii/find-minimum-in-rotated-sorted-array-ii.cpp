class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = INT_MAX;

        for (int num : nums) {
            min = std::min(min, num);
        }

        return min;
    }
};