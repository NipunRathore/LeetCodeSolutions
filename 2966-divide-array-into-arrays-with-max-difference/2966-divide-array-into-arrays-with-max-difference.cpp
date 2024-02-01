class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        // sort the input array in ascending order 
        sort(nums.begin(), nums.end()) ;
        int n = nums.size() ;

        vector<vector<int> > ans ;
        // iterate in steps of 3, for each group of 3 consecuive elements 
        for (int i = 2 ; i < n ; i += 3)
        {
            // checks whether difference between 3rd and 1st element of group is less than or equal to k
            if (nums[i] - nums[i - 2] <= k)
            {
                // if yes, add triplet to ans vector 
                ans.push_back({nums[i - 2], nums[i - 1], nums[i]}) ; 
            }
            // if condition not satisfied, return empty vector 
            else
            {
                return {} ; 
            }
        }
        return ans ; 
    }
};