class Solution {
public:
    int firstUniqChar(string s) {
        // store {char, freq} in map 
        unordered_map<char, int> mp ; 
        for (auto ch : s)
        {
            mp[ch] ++ ; 
        }

        for (int i = 0 ; i < s.length() ; i ++)
        {
            // if any char has frequency 1 i.e., unique, return the index 
            if (mp[s[i]] == 1)
            {
                return i ; 
            }
        }
        // if no character is unique, return -1 
        return -1 ; 
    }
};
// T.C. = O(N)
// S.C. = O(1)