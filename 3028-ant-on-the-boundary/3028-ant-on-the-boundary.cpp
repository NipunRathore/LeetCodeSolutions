class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int currPos = 0 ; 
        int cnt = 0 ; 

        for (int it : nums)
        {
            currPos += it ; 
            if (currPos == 0)
            {
                cnt ++ ; 
            }
        }
        return cnt ;
    }
};