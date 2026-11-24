class Solution {
public:
    long long coloredCells(int n) {
        // return 2LL * n * n - 2LL * n + 1;
        // most optimised - O(1)

        // pattern based
        long long ans = 1;
        for(int i = 2; i <= n; i++) {
            ans += 4LL * (i - 1);
        }
        return ans;
    }
};