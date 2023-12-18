class Solution {
public:
// APPROACH : Using Sorting
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ; 
        int n = nums.size() ; 

        int maxDiff = (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]) ; 
        return maxDiff ;
    }
};
// T.C. = O(N * logN)
// S.C. = O(1)