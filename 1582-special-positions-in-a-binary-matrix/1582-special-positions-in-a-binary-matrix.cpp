class Solution {
    private: 
    
    // function to check entire row contains 0 
    bool checkRow (vector<vector<int> > &mat, int row)
    {
        for (int j = 0 ; j < mat[0].size() ; j ++)
        {
            if (mat[row][j] == 1)
            {
                return false ; 
            }
        }
        return true ; 
    }

    // function to check entire column contains 0 
    bool checkCol (vector<vector<int> > &mat, int col)
    {
        for (int i = 0 ; i < mat.size() ; i ++)
        {
            if (mat[i][col] == 1)
            {
                return false ; 
            }
        }
        return true ; 
    }

    public:
    int numSpecial(vector<vector<int>>& mat) {
        int cntSpecial = 0 ; 

        int rows = mat.size() ; 
        int cols = mat[0].size() ; 

        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < cols ; j ++)
            {
                if (mat[i][j] == 1)
                {
                    // make 0 temporarily for checking that entire row & column are 0 
                    mat[i][j] = 0 ; 
                    
                    // if no other element in 'ith' row & 'jth' column are 1
                    // then, increase count of special
                    if (checkRow(mat, i) && checkCol(mat, j))
                    {
                        cntSpecial ++ ; 
                    }
                    // make 1 again after performing check on row & column
                    mat[i][j] = 1 ; 
                }
            }
        }
        return cntSpecial ; 
    }
};