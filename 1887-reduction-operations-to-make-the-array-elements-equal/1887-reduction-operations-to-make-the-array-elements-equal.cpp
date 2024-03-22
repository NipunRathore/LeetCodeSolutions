class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ; 
        int x = 0 ;
        int y = 0 ;
        
        for (int i = 1 ; i < nums.size() ; i ++)
        {
            if (nums[i] != nums[i - 1])
            {
                x ++ ; 
            }
            y += x ; 
        }
        return y ;
    }
};
// T.C. = O(N*logN)
// S.C. = O(1)