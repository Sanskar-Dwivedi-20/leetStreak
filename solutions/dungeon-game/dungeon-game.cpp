class Solution {
public:

    int s(int row, int col, vector<vector<int>>& d, vector<vector<int>>& dp){

        int r = d.size();
        int c = d[0].size();

        if(row>=r || col>= c) return INT_MAX;
        if(dp[row][col] != -1) return dp[row][col];
        if(row == r-1 && col == c-1) return max(1,1-d[row][col]);

        int right = s(row,col+1,d, dp);
        int down = s(row+1,col,d, dp);

        int best = min(right, down);
        return dp[row][col] = max(1,best-d[row][col]);

        // max(positive, negative)

    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int row = dungeon.size();
        int col = dungeon[0].size();
        vector<vector<int>> dp(row, vector<int>(col, -1));
        return s(0,0,dungeon, dp);
    }
};