class Solution {
public:
    bool isValid (int x, int y, int rows, int cols)
    {
        if (x >= 0 && y >= 0 && x < rows && y < cols)
        {
            return true ;
        }
        return false ; 
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1} ; 
        int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1} ; 

        int rows = img.size() ; 
        int cols = img[0].size() ; 
        vector<vector<int> > res (rows, vector<int> (cols, -1)) ;

        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < cols ; j ++)
            {
                int sum = img[i][j] ;
                int cnt = 1 ;

                for (int k = 0 ; k < 8 ; k ++)
                {
                    int newi = i + dx[k] ; 
                    int newj = j + dy[k] ; 

                    if (isValid (newi, newj, rows, cols))
                    {
                        cnt ++ ; 
                        sum += img[newi][newj] ;
                    }
                }
                res[i][j] = sum / cnt ; 
            }
        }
        return res ; 
    }
};