class Solution {
public:
    void solve(vector<int> &nums, int index, int currXor, int &result)
    {
        if (index >= nums.size())
        {
            result += currXor ; 
            return ; 
        }

        solve(nums, index + 1, currXor ^ nums[index], result) ; 
        solve(nums, index + 1, currXor, result) ; 
    }
    int subsetXORSum(vector<int>& nums) {
        int result = 0 ; 
        solve(nums, 0, 0, result) ; 
        return result ; 
    }
};