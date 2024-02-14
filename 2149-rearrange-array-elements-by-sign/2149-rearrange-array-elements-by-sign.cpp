class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> ans (n) ;

        int indexPos = 0 ;
        int indexNeg = 1 ;

        for (int i = 0 ; i < n ; i ++)
        {
            if (nums[i] > 0)
            {
                ans[indexPos] = nums[i] ;
                indexPos += 2 ;
            }
            if (nums[i] < 0)
            {
                ans[indexNeg] = nums[i] ;
                indexNeg += 2 ;
            }
        }
        return ans ; 
    }
};