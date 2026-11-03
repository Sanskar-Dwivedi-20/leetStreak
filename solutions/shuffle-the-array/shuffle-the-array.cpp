class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int x=0, y=1;

        for(int i=0; i<n; i++){
            ans[x] = nums[i];
            x +=2;
        }
        for(int j=n; j<2*n; j++){
            ans[y] = nums[j];
            y+=2;
        }
        return ans;
    }
};