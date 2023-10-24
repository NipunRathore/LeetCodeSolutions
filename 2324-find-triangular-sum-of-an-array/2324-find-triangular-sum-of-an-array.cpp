class Solution {
public:
    int triangularSum(vector<int>& nums) {

        // iterate till size not equal to 1 i.e., greater than 1 
        while (nums.size() != 1)
        {
            // vector that stores the triangular sum of current nums vector
            vector<int> newNums ; 

            for (int i = 1 ; i < nums.size() ; i ++)
            {
                newNums.push_back((nums[i] + nums[i - 1]) % 10) ;
            }

            // replace array nums with newNums 
            nums = newNums ; 
        }
        return nums[0] ; 
    }
};