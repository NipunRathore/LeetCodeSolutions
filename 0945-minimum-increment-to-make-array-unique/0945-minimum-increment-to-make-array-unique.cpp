class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        // {element, freq} map 
        map<int, int> mp ; 
        for (int it : nums)
        {
            mp[it] ++ ;
        }

        // ans variable stores number of moves 
        int ans = 0 ; 
        for (auto &it : mp)
        {
            int num = it.first ;
            int freq = it.second ; 
            // if freq is more than 1, keep one of them & increment all of the remaining to make them P1 + element}
            if (freq > 1)
            {
                ans += (freq - 1) ; 
                mp[num + 1] += (freq - 1) ; 
            }
        }
        return ans ; 
    }
};