class Solution {
public:
// Let the number of ones in the ith row be onesRowi.
// Let the number of ones in the jth column be onesColj.
// Let the number of zeros in the ith row be zerosRowi.
// Let the number of zeros in the jth column be zerosColj.
// diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj

    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rows = grid.size() ; 
        int cols = grid[0].size() ; 

        // store 1 & 0 counts in each ROW & COL
        vector<int> onesRow(rows) ;
        vector<int> zerosRow(rows) ; 
        vector<int> onesCol(cols) ; 
        vector<int> zerosCol(cols) ;

        // ROW-WISE Traversal 
        for (int i = 0 ; i < rows ; i ++)
        {
            int oneCnt = 0 ; 
            int zeroCnt = 0 ; 
            for (int j = 0 ; j < cols ; j ++)
            {
                if (grid[i][j] == 1)
                {
                    oneCnt ++ ; 
                }
                else zeroCnt ++ ; 
            }

            onesRow[i] = oneCnt ; 
            zerosRow[i] = zeroCnt ; 
        }

        // COL-WISE Traversal
        for (int i = 0 ; i < cols ; i ++)
        {
            int oneCnt = 0 ;
            int zeroCnt = 0 ; 
            for (int j = 0 ; j < rows ; j ++)
            {
                if (grid[j][i] == 1)
                {
                    oneCnt ++ ;
                }
                else zeroCnt ++ ;
            }

            onesCol[i] = oneCnt ; 
            zerosCol[i] = zeroCnt ; 
        }

        // Answer Matrix {rows * cols}
        vector<vector<int> > diff (rows, vector<int> (cols, 0)) ; 
        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < cols ; j ++)
            {
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j] ; 
            }
        }
        return diff ; 
    }
};
// T.C. = O(N * M)
// S.C. = O(N * M)