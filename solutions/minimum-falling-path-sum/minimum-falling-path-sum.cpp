class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for (int j =0; j < m; j++)
            dp[0][j] = matrix[0][j];
        
        for(int i =1; i < n; i++){
            for(int j = 0; j < m; j++){

                int up = matrix[i][j]+dp[i-1][j];

                int leftDiag = 1e9;
                if(j > 0)
                    leftDiag = matrix[i][j] + dp[i-1][j-1];

                int rightDiag = 1e9;
                if(j < m-1)
                    rightDiag = matrix[i][j] + dp[i-1][j+1];
                
                dp[i][j] =min({up, leftDiag, rightDiag});
            }
        }
        int ans = 1e9;
        for(int i=0; i<n; i++){
            
            ans = min(dp[n-1][i], ans);
        }
        return ans;
    }
};