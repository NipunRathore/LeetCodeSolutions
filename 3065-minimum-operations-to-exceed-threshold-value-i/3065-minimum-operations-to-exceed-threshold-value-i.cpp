class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()) ; 
        int cnt = 0 ; 
        for (int i = 0 ; i < nums.size() ; i ++)
        {
            if (nums[i] >= k)
            {
                return cnt ; 
            }
            else
            {
                cnt ++ ; 
            }
        }
        return -1 ; 
    }
};