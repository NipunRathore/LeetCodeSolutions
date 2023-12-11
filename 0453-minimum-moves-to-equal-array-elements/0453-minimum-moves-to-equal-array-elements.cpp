class Solution {
public:
    int minMoves(vector<int>& nums) {
        // sort array 
        sort(nums.begin(), nums.end()) ; 

        // cnt stores the total moves 
        int cnt = 0 ; 
        for (int i = 1 ; i < nums.size() ; i ++)
        {
            // increment cnt by the difference between current element and the smallest element 
            cnt += nums[i] - nums[0] ; 
        }
        return cnt ; 
    }
};