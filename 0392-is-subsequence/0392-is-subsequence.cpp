class Solution {
public:
    bool isSubsequence(string s, string t) {
        // TRUE -> if 's' is a subsequence of 't'

        // Edge Case
        if (s.length() > t.length())
        {
            return false ; 
        }

        int i = 0 ; 
        int j = 0 ; 
         
        while (i < t.length() && j < s.length())
        {
            // if character matches then increment both i & j 
            if (t[i] == s[j])
            {
                i ++ ; 
                j ++ ;
            }

            // if doesn't match then increment only i i.e., in 't' string
            else
            {
                i ++ ; 
            }
        }

        // in the end, if entire subsequence string has been traversed, return TRUE 
        if (j == s.length())
        {
            return true ; 
        }
        return false ; 
    }
};