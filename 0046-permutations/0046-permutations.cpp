class Solution {
public:
// we swap only with characters at index till the end of string 
// and not those before the current index, because previous se swap krne se backtracking ho jayegi which will be of no use
// 'abc' se 'bac' bana, now index at 'a' in 'bac', if swap with 'b' we get 'abc' again, therefore not worth it
void solve(vector<int> nums, vector<vector<int>>& ans, int index)
{
    // base case
    // when index goes beyond the size of array
    // store current permutation and return 
    if (index >= nums.size())
    {
        ans.push_back(nums) ;
        return ; 
    }

    // solve one case
    // index se lekar end of array tak har element se swap current index element
    for (int i = index ; i < nums.size() ; i ++)
    {
        swap(nums[index], nums[i]) ;
        solve(nums, ans, index + 1) ;
        // backtracking
        // changes are being made in the original string 
        // when a recursive call is made it is completed till base case is reached 
        // then control gets returned to calling function
        // therefore, before returning need to repeat the swap to neutralise the effect of the swap done earlier
        // pehle first index ke liye call hote hain till base case is reached
        // then wahan se return hoke next index ke calls shuru hote hain
        // to get the original string back before next recursive calls we swap back
        swap(nums[index], nums[i]) ;
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans ;
        int index = 0 ;

        solve(nums, ans, index) ;

        return ans ;
    }
};