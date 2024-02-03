class Solution {
public:
    // Two-Pointer Approach
    int maxArea(vector<int>& height) {
        int n = height.size() ; 
        int start = 0 ; 
        int end = n - 1 ; 
        int maxWater = INT_MIN ; 
        
        while (start < end)
        {
            // at each position check the area of rectangle formed & update answer 
            // Horizontal Length -> difference in the two-pointers 
            int currWidth = end - start ; 
            // Vertical Length -> minimum of 2 vertical lines because water above that point is overflown
            int currHeight = min (height[start], height[end]) ; 
            // Area = Horizontal & Vertical Length
            int currWater = currWidth * currHeight ; 
            // update the maximum area if possible
            maxWater = max(maxWater, currWater) ; 

            // Greedy Approach -> try to maximize the height of Vertical line to get Max area 
            // move such that one having greater value stays still & other pointer moves
            if (height[start] > height[end])
            {
                end -- ; 
            }
            else
            {
                start ++ ; 
            }
        }
        return maxWater ; 
    }
};
// T.C. = O(N)
// S.C. = O(1)