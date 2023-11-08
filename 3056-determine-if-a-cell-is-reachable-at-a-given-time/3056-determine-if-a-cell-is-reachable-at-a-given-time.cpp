class Solution {
public:
// Using CHEBYSHEV Distance 
// measures distance between two points as the maximum difference over any of their axis values. In a 2D grid, for instance, if we have two points (x1, y1), and (x2, y2), the Chebyshev distance between is max(y2 - y1, x2 - x1).
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if (sx == fx && sy == fy)
        {
            if (t == 1)
            {
                return false ; 
            }
            return true ; 
        }

        int dx = abs(sx - fx) ;
        int dy = abs(sy - fy) ;

        if (max(dx, dy) > t)
        {
            return false ; 
        }
        return true ; 
    }
};
// T.C. = O(1)
// S.C. = O(1) 