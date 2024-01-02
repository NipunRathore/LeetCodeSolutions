class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // sort both the greed factor & cookies size arrays
        sort(g.begin(), g.end()) ; 
        sort(begin(s), end(s)) ; 

        int i = 0, j = 0 ; 
        int ans = 0 ; 

        // upon sorting, iterate both arrays 
        while (i < g.size() && j < s.size())
        {
            // starting with smallest greed & smallest cookie
            // if match found increment answer and move to next child & cookie index 
            if(g[i] <= s[j])
            {
                ans ++ ; 
                i ++ ; 
            }
            // if no match found
            // move on to next cookie 
            j ++ ; 
        }
        return ans ; 
    }
};