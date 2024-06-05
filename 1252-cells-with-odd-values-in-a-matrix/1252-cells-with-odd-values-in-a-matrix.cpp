class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count = 0 ; 
        vector<vector<int> > temp (m, vector<int> (n, 0)) ; 

        for (int i = 0 ; i < indices.size() ; i ++)
        {
            for (int j = 0 ; j < m ; j ++)
            {
                temp[j][indices[i][1]] += 1 ; 
            }
            for (int k = 0 ; k < n ; k ++)
            {
                temp[indices[i][0]][k] += 1 ; 
            }
        }

        for (auto &row : temp)
        {
            for (int val : row)
            {
                if (val % 2 != 0)
                {
                    count ++ ; 
                }
            }
        }
        return count ; 
    }
};