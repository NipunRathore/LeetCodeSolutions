class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() == 1)
        {
            return true ; 
        }

        bool flag = false ; 

        for (int i = 0 ; i < nums.size() - 1 ; i ++)
        {
            if (nums[i] < nums[i + 1])
            {
                flag = true ;
                break ; 
            }
            else continue ; 
        }

        if (flag == false)
        {
            return true ; 
        }

        for (int i = 0 ; i < nums.size() - 1 ; i ++)
        {
            if (nums[i] > nums[i + 1])
            {
                return false ; 
            }
        }

        return true ; 
    }
};