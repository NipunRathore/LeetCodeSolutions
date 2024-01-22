class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp ; 
        for (auto it : nums)
        {
            mp[it] ++ ; 
        }

        vector<int> ans ; 
        for (auto it : mp)
        {
            if (it.second == 2)
            {
                ans.push_back(it.first) ; 
            }
        }
        
        for (int i = 1 ; i <= nums.size() ; i ++)
        {
            if (mp.count(i) == 0)
            {
                ans.push_back(i) ; 
                break ; 
            }
        }
        return ans ; 
    }
};