class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ; 

        // similar approach to Part-1 of the Problem 
        // only difference is that here we find difference between elements of array & median element of array 
        // and there we used to find difference between elements of array & the smallest element 
        int n = nums.size() ; 
        int median = nums[n / 2] ;

        int ans = 0 ; 
        for (int i = 0 ; i < n ; i ++)
        {
            ans += abs (nums[i] - median) ; 
        } 
        return ans ; 
    }
};
// T.C. = O(N*logN)
// S.C. = O(1)