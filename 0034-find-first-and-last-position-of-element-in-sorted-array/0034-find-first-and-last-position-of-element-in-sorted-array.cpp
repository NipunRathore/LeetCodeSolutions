class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1 ; 
        int last = -1 ; 

        int n = nums.size() ; 
        for (int i = 0 ; i < n ; i ++)
        {
            if (nums[i] == target)
            {
                first = i ; 
                break ; 
            }
        }

        for (int i = 0 ; i < n ; i ++)
        {
            if (nums[i] == target)
            {
                last = i ; 
                continue ; 
            }
        }

        return {first, last} ; 
    }
};