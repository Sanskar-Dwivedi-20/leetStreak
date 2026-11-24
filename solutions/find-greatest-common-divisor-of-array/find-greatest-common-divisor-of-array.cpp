class Solution {
public:
    int findGCD(vector<int>& nums) {
        // approach 1
        // sort(nums.begin(), nums.end());
        // int num = nums[0];
        // int end = nums[nums.size()-1];
        
        // while(num>0){
        //     if(end%num == 0) 
        //         return num;
        //     else num--;
        // }
        // return 1;

        // the above solution is a tle

        // approach 2
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        return __gcd(min,max);
    }
};