class Solution {
public:
    int scoreOfString(string s) {
        int res = 0 ; 
        for (int i = 0 ; i < s.length() - 1 ; i ++)
        {
            if (s[i] - s[i + 1] < 0)
            {
                res += abs(s[i] - s[i + 1]) ; 
            }
            else
            {
                res += s[i] - s[i + 1] ;
            }
        }
        return res ; 
    }
};