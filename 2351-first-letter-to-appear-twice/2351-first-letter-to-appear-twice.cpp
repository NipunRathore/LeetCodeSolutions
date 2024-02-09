class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> mp ;
        for (auto it : s)
        {
            mp[it] ++ ;

            if (mp[it] == 2)
            {
                return it ;
            }
        }
        return ' ' ;
    }
};