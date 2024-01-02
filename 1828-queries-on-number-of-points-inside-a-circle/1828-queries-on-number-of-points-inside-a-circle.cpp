class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans ; 
        
        for (int i = 0 ; i < queries.size() ; i ++)
        {
            int cnt = 0 ; 
            for (int j = 0 ; j < points.size() ; j ++)
            {
                // DISTANCE OF A POINT {x1, y1} from CENTER oF CIRCLE {x0, y0}
                // d = sqrt((x1- x0)^2 + (y1 - y0)^2)
                double dist = sqrt(pow((points[j][0] - queries[i][0]), 2) + pow((points[j][1] - queries[i][1]), 2)) ; 
                int radius = queries[i][2] ;
                // if distance is less than radius then point lies inside circle 
                if (dist <= radius)
                {
                    cnt ++ ; 
                }
            }
            ans.push_back(cnt) ; 
        }
        return ans ; 
    }
};