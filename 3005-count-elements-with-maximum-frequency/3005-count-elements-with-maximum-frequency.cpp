class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp ; 
        int maxFreq = INT_MIN ; 

        for (int i = 0 ; i < nums.size() ; i ++)
        {
            mp[nums[i]] ++ ; 
            maxFreq = max(maxFreq, mp[nums[i]]) ; 
        }

        int sum = 0 ; 
        for (auto it : mp)
        {
            if (it.second == maxFreq)
            {
                sum += maxFreq ; 
            }
        }
        return sum ;
    }
};