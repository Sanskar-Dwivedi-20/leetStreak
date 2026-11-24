class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {

            long long product = 1;
            int hcf = 0;
            long long lcm = 1;

            for(int j = i; j < nums.size(); j++) {
                if(product > 25200 / nums[j])
                    break;
                product *= nums[j];
                hcf = __gcd(hcf, nums[j]);
                lcm = (lcm / __gcd(lcm, (long long)nums[j])) * nums[j];

                if(product == hcf * lcm) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};