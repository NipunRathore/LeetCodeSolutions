class Solution {
public:
    int solve(int row, int col, vector<vector<int>>& grid)
    {
        int maxi = 0 ;
        for (int i = row ; i < row + 3 ; i ++)
        {
            for (int j = col ; j < col + 3 ; j ++)
            {
                if (grid[i][j] > maxi)
                {
                    maxi = grid[i][j] ;
                }
            }
        }
        return maxi ;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size() ;
        vector<vector<int>> ans(n - 2, vector<int> (n - 2, 0) ) ;

        for (int i = 0 ; i < n - 2 ; i ++) 
        {
            for (int j = 0 ; j < n - 2 ; j ++)
            {
                int maxi = solve(i, j, grid) ;
                ans[i][j] = maxi ;
            }
        }
        return ans ;
    }
};