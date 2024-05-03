class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i = 0 ; i < 2 ; i ++)
        {
            for (int j = 0 ; j < 2 ; j ++)
            {
                int score = 0 ;

                if (grid[i][j] == grid[i + 1][j])
                {
                    score ++ ;
                }
                if (grid[i][j] == grid[i][j + 1])
                {
                    score ++ ;
                }
                if (grid[i][j] == grid[i + 1][j + 1])
                {
                    score ++ ;
                }
                if (score != 1)
                {
                    return true ;
                }
            }
        }
        return false ;
    }
};