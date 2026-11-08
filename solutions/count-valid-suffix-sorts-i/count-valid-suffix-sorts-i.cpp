class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int  n = nums.size();
        
        vector<int> a = nums;
        vector<int> b = target;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a!=b) return 0;

        int x = 0;

        while(x<n && nums[x] == target[x]) x++;
        
        int y = n-1;
        
        while(y>0 && target[y-1] >= target[y]) y--;

        return max(0, min(x, n - 1) - y + 1);
    }
};