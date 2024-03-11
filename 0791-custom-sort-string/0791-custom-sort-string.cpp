class Solution {
public:
    string customSortString(string order, string s) {
        // store {char, freq} pair
        unordered_map<char, int> mp ; 
        for (int i = 0 ; i < s.length() ; i ++)
        {
            mp[s[i]] ++ ; 
        }

        string ans = "" ; 
        for (auto it : order)
        {
            int freq = mp[it] ; 
            while (freq --)
            {
                ans += it ; 
                mp[it] = 0 ; 
            }
        }

        for (auto it : mp)
        {
            int freq = it.second ; 
            char ch = it.first ; 

            while (freq --)
            {
                ans += ch ; 
            }
        }
        return ans ; 
    }
};