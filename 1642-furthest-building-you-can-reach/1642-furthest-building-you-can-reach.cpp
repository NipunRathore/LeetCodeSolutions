class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        // min heap priority queue to store height differences 
        priority_queue<int, vector<int>, greater<int> > pq ; 

        for (int i = 0 ; i < heights.size() - 1 ; i ++)
        {
            // calculate height difference of two consecutive buildings 
            int diff = heights[i + 1] - heights[i] ; 

            // if difference is positive (means need to climb)
            if (diff > 0)
            {
                // push the difference in priority queue 
                pq.push(diff) ; 
            }

            // if number of elements in pq are greater than number of ladders available 
            if (pq.size() > ladders)
            {
                // subtract the smallest difference from available bricks 
                bricks -= pq.top() ;
                pq.pop() ;
            }

            // if remaining bricks are not enough to cover the climb, return index 
            if (bricks < 0)
            {
                return i ; 
            }
        }
        return heights.size() - 1 ; 
    }
};