class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size() ;
        
        for (int i = 0 ; i < n - 1 ; i ++)
        {
            for (int j = 0 ; j < m ; j ++)
            {
                if (grid[i][j] != grid[i + 1][j])
                {
                    return false ; 
                }
            }
        } 

        for (int i = 0 ; i < n ; i ++)
        {
            for (int j = 0 ; j < m - 1 ; j ++)
            {
                if (grid[i][j] == grid[i][j + 1])
                {
                    return false ; 
                }
            }
        }
        return true ; 
    }
};