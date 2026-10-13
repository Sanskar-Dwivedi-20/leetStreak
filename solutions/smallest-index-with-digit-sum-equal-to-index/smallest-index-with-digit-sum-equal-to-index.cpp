class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for (int i = 0; i<nums.size(); i++){
            int ans=0;
            int num = nums[i];
            while(num >0 ){
                ans += num %10;
                num /= 10;
            }
            if(ans == i) return ans;
        }
        return -1;
    }
};