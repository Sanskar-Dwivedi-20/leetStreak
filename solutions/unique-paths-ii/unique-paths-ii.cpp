
class Solution {
public:
    vector<vector<int>> dp;

    int solve(int i, int j, vector<vector<int>>& obstacleGrid, int m, int n) {

        if(i >= m || j >= n)
            return 0;
        if(obstacleGrid[i][j] == 1)
            return 0;
        if(i == m-1 && j == n-1)
            return 1;
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int right = solve(i, j+1, obstacleGrid, m, n);
        int down = solve(i+1, j, obstacleGrid, m, n);

        return dp[i][j] = right + down;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        dp.assign(m, vector<int>(n, -1));

        return solve(0, 0, obstacleGrid, m, n);
    }
};
