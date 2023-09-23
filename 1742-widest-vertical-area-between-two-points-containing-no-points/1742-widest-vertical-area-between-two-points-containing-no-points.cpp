class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> v ; 

        for (int i = 0 ; i < points.size() ; i ++)
        {
            for (int j = 0 ; j < points[i].size() ; j ++)
            {
                v.push_back(points[i][j]) ;
                break ;
            }
        }
        sort(v.begin(), v.end()) ;

        int ans = INT_MIN ;
        for (int i = 1 ; i < v.size() ; i ++)
        {
            int diff = v[i] - v[i - 1] ; 
            ans = max (ans, diff) ;
        }

        return ans ;
    }
};