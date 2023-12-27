class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int minTime = 0 ; 
        int prevIndex = 0 ; 

        for (int i = 1 ; i < colors.size() ; i ++)
        {
            if (colors[i] == colors[prevIndex])
            {
                if (neededTime[i] > neededTime[prevIndex])
                {
                    minTime += neededTime[prevIndex] ; 
                    prevIndex = i ; 
                }
                else
                {
                    minTime += neededTime[i] ; 
                }
            }
            else
            {
                prevIndex = i ; 
            }
        }
        return minTime ; 
    }
};
// T.C. = O(N)
// S.C. = O(1)