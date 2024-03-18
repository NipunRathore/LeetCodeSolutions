class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // sort based on starting points 
        sort(points.begin(), points.end()) ; 
        // count variable to keep track of number of arrows needed 
        int cnt = 1 ; 
        // initialise start & end with first balloon 
        int start = points[0][0] ;  
        int end = points[0][1] ; 
        for (int i = 1 ; i < points.size() ; i ++)
        {
            // check if the current balloon starts after the end position, it will require a new balloon 
            if (points[i][0] > end)
            {
                // if yes, 
                // increment count by 1 
                cnt ++ ; 
                // update start and end with current balloon 
                start = points[i][0] ; 
                end = points[i][1] ; 
            }
            else
            {
                // if no, 
                // update start to maximum of its current balue & the start coordinate of current balloon
                // and update end to minimum of current end position and end of current balloon 
                start = max (start, points[i][0]) ; 
                end = min (end, points[i][1]) ; 
            }
        }
        return cnt ; 
    }
};