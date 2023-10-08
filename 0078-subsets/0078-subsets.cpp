class Solution {
public:
// PASS BY REFERENCE POWER SET vector so that copy not created and changes done in original ans vector passed in argument
    void solve(vector<int> nums, vector<int> output, vector<vector<int>> &ans, int index)
    {
        // BASE CASE 
        // when index goes beyond size of array 
        // store the current subset and return 
        if (index >= nums.size())
        {
            ans.push_back(output) ;
            return ;
        }

        // EXCLUDE
        // just make the next recursive call 
        solve(nums, output, ans, index + 1) ;

        // INCLUDE
        // store the current element in subset and make next recursive call 
        output.push_back(nums[index]) ;
        solve(nums, output, ans, index + 1) ;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        // POWER SET VECTOR -> 2-D vector that stores all subsets
        vector<vector<int>> ans ; 
        // SUBSET VECTOR -> 1-D vector that stores current subset
        vector<int> output ; 
        int index = 0 ;

        solve(nums, output, ans, index) ;

        return ans ; 
    }
};