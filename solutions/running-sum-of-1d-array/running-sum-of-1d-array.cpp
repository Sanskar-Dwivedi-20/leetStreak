class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // inplace changing to running sum
        // for(int i = 1; i < nums.size(); i++)
        // {
        //     nums[i] = nums[i] + nums[i-1];
        // }
        // return nums;

        // changing to running sum into new vector

        vector<int> ans;
        int curr =0;
        for(int i=0;i<nums.size();i++){
            curr += nums[i];
            ans.push_back(curr);
        }
        return ans;
    }
};