class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m ; 
        for (int i : nums)
        {
            m[i] ++ ; 
        }

        vector<int> ans ; 
        for (auto i : m)
        {
            if (i.second  == 1)
            {
                ans.push_back(i.first) ;
            }
        }
        return ans ;
    }
};