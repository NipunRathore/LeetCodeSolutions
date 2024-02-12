class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp ; 
        for (auto i : nums)
        {
            mp[i] ++ ; 
        }

        int ans = 0 ; 
        int maxFreq = INT_MIN ;
        for (int i = 0 ; i < nums.size() ; i ++)
        {
            int freq = mp[nums[i]] ; 
            if (freq > maxFreq)
            {
                maxFreq = freq ; 
                ans = nums[i] ; 
            }
        }
        return ans ; 
    }
};