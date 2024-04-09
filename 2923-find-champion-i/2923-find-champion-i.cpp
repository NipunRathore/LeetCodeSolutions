class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size() ; 
        int max1 = 0 ; 
        int max2 = 0 ; 

        for (int i = 0 ; i < n ; i ++)
        {
            int sum = 0 ; 
            for (int j = 0 ; j < n ; j ++)
            {
                sum += grid[i][j] ; 
            }

            if (max1 < sum)
            {
                max1 = sum ; 
                max2 = i ; 
            }
        }
        return max2 ; 
    }
};