class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size() ; 
        int cols = grid[0].size() ; 
        int per = 0 ; 
        // iterate over each cell of grid 
        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < cols ; j ++)
            {
                // if cell represents land 
                if (grid[i][j] == 1)
                {
                    // initialize count of sides to 4 
                    per += 4 ; 

                    // check left neighbor and decrement count if it's land 
                    if (j > 0 && grid[i][j - 1])
                    {
                        per -- ; 
                    }
                    // check right neighbor
                    if (j < cols - 1 && grid[i][j + 1])
                    {
                        per -- ; 
                    }
                    // check top neighbor 
                    if (i > 0 && grid[i - 1][j])
                    {
                        per -- ; 
                    }
                    // check bottom neighbor 
                    if (i < rows - 1 && grid[i + 1][j])
                    {
                        per -- ; 
                    }
                }
            }
        }
        // return total perimeter of islands 
        return per ; 
    }
};