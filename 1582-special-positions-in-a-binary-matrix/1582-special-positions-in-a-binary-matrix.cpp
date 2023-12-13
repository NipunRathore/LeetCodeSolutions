class Solution {
public:
// Earlier, we were finding for every '1' element whether it's row & column consisted of any other 1's
// Now, we make 2 arrays and while traversing the matrix whenever we encounter a '1' we increase the RowArray for the 'ith' index & ColArray for the 'jth' index
// Meaning, we are maintaining the count of 1's in each Row & Column in the 2 arrays 
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size() ; 
        int cols = mat[0].size() ; 

        // to store count of 1's in each row & column 
        vector<int> rowArr (rows) ; 
        vector<int> colArr (cols) ; 

        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < cols ; j ++)
            {
                if (mat[i][j] == 1)
                {
                    // increase count of 1's in ith row & jth column 
                    rowArr[i] ++ ; 
                    colArr[j] ++ ; 
                }
            }
        }

        int cntSpecial = 0 ; 
        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < cols ; j ++)
            {
                // if element at {i, j} is 1 
                // AND ith row contains only 1 element which is '1'
                // AND jth column contains only 1 element which is '1'
                // then it is a SPECIAL POSITION
                if (mat[i][j] == 1 && rowArr[i] == 1 && colArr[j] == 1)
                {
                    cntSpecial ++ ; 
                }
            }
        }

        return cntSpecial ; 
    }
};
// T.C. gets reduced from cubic to square via trade-off with S.C.
// T.C. = O(N * M)
// S.C. = O(M) + O(N) = O(max(N, M))

// class Solution {
//     private: 
    
//     // function to check entire row contains 0 
//     bool checkRow (vector<vector<int> > &mat, int row)
//     {
//         for (int j = 0 ; j < mat[0].size() ; j ++)
//         {
//             if (mat[row][j] == 1)
//             {
//                 return false ; 
//             }
//         }
//         return true ; 
//     }

//     // function to check entire column contains 0 
//     bool checkCol (vector<vector<int> > &mat, int col)
//     {
//         for (int i = 0 ; i < mat.size() ; i ++)
//         {
//             if (mat[i][col] == 1)
//             {
//                 return false ; 
//             }
//         }
//         return true ; 
//     }

//     public:
//     int numSpecial(vector<vector<int>>& mat) {
//         int cntSpecial = 0 ; 

//         int rows = mat.size() ; 
//         int cols = mat[0].size() ; 

//         for (int i = 0 ; i < rows ; i ++)
//         {
//             for (int j = 0 ; j < cols ; j ++)
//             {
//                 if (mat[i][j] == 1)
//                 {
//                     // make 0 temporarily for checking that entire row & column are 0 
//                     mat[i][j] = 0 ; 
                    
//                     // if no other element in 'ith' row & 'jth' column are 1
//                     // then, increase count of special
//                     if (checkRow(mat, i) && checkCol(mat, j))
//                     {
//                         cntSpecial ++ ; 
//                     }
//                     // make 1 again after performing check on row & column
//                     mat[i][j] = 1 ; 
//                 }
//             }
//         }
//         return cntSpecial ; 
//     }
// };
// T.C. = O(N ^ 3)
// S.C. = O(1)