class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        // map to store {character, index}
        unordered_map<char, int> mp ; 
        int ans = INT_MIN ; 

        for (int i = 0 ; i < s.length() ; i ++)
        {
            char ch = s[i] ; 
            // if current char already present in map then find length between characters
            if (mp.find(ch) != mp.end())
            {
                ans = max (ans, i - mp[ch] - 1) ;
            }
            // if character not present in map the store it with it's index 
            else
            {
                mp[ch] = i ; 
            }
        }
        // if all letters distinct 
        if (ans == INT_MIN)
        {
            return -1 ; 
        }
        return ans ; 
    }
};