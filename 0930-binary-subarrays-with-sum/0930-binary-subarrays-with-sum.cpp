class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mp ; 
        mp[0] = 1 ; 
        int cnt = 0 ; 
        int currSum = 0 ; 

        for (int i = 0 ; i < nums.size() ; i ++)
        {
            currSum += nums[i] ; 

            if (mp.find(currSum - goal) != mp.end())
            {
                cnt += mp[currSum - goal] ; 
            }
            mp[currSum] ++ ; 
        }
        return cnt ; 
    }
};