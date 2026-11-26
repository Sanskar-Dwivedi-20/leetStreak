class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        // int i =0;
        // int j = nums.size()-1;
        // int sum;
        // while(i<j){
        //     sum = nums[i] +nums[j];
        //     if(target > sum) j--;
        //     if( target < sum) i++;
        //     else break;
        // }
        // return {i,j};
        int j = nums.size()-1;
        int i;
    
        for( i=0; i< nums.size(); i++){
            while(j>i){
                if(nums[i]+nums[j] == target)
                    return{i,j};
                j--;
            }
            j=nums.size()-1;
        }
        return {};
    }
};