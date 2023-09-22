class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m ; 
        int size = nums.size() ; 
        for (int i = 0 ; i < size ; i ++)
        {
            m[nums[i]] ++ ; 
        }

        vector<int> ans ;
        for (auto i : m)
        {
            if (i.second > (size / 3))
            {
                ans.push_back(i.first) ; 
            }
        }

        return ans ; 
    }
};