// class Solution {
// public:
//     int help(vector<int>& cost, int i) {
//         if (i == 0)
//             return cost[0];

//         if (i == 1)
//             return cost[1];

//         return cost[i] + min(help(cost, i-1), help(cost, i-2));
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         return min(help(cost, n-1), help(cost, n-2));
//     }
// };


class Solution {
public:
    int help(vector<int>& cost, int i, vector<int>& dp) {
        if (i == 0)
            return cost[0];
        if (i == 1)
            return cost[1];
        if (dp[i] != -1)
            return dp[i];
        return dp[i] = cost[i] + min(
            help(cost, i-1, dp),
            help(cost, i-2, dp)
        );
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);

        return min(help(cost, n-1, dp),
            help(cost, n-2, dp));
    }
};
