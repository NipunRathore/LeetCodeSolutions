class Solution {
public:
    int solve(int nStairs, int i, vector<int> &dp)
    {
        // BASE CASE 
        // if reached nStairs, means you are already reached, so return 1
        if (i == nStairs)
        {
            return 1 ; 
        }

        // if currentStair greater / surpasses nStairs, return 0 
        if (i > nStairs)
        {
            return 0 ; 
        }

        // if answer already stored in dp array, return answer
        if (dp[i] != -1)
        {
            return dp[i] ; 
        }
        
        // can move to next stair by either taking 1 step or 2 steps
        // Recurrence relation is T(n) = T(n + 1) + T(n + 2)
        dp[i] = (solve(nStairs, i + 1, dp) + solve(nStairs, i + 2, dp)) ; 
        return dp[i] ; 
    }

    int climbStairs(int n) {
        vector<int> dp (n, -1) ; 
        int ans = solve (n, 0, dp) ; 
        
        return ans ; 
    }
};