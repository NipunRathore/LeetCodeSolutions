class Solution {
public:
int mod = 1e9 + 7 ;
    int solve(int m, int n, int maxMove, int i, int j, vector<vector<vector<int> > >& dp)
    {
        // if ball goes beyond boundary 
        if (i < 0 || j < 0 || i >=m || j >= n)
        {
            return 1 ; 
        }

        // if moves finished
        if (maxMove == 0)
        {
            return 0 ;
        }

        // if answer already stored
        if (dp[i][j][maxMove] != -1)
        {
            return dp[i][j][maxMove] ; 
        }

        // 4 possible moves 
        int left = solve(m, n, maxMove - 1, i, j - 1, dp) ;
        int right = solve(m, n, maxMove - 1, i, j + 1, dp) ;
        int up = solve(m, n, maxMove - 1, i - 1, j, dp) ; 
        int down = solve(m, n, maxMove - 1, i + 1, j, dp) ;

        return dp[i][j][maxMove] = ((left + right) % mod + (up + down) % mod) % mod ; 
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        // 3 non-constant variables. therefore, 3-Dimensional DP & initialise with -1
        vector<vector<vector<int> > > dp (m, vector<vector<int> >(n, vector<int> (maxMove + 1, -1) ) ) ; 
        return solve(m, n, maxMove, startRow, startColumn, dp) ; 
    }
};