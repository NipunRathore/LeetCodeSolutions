class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(), s.end()) ;
        sort(t.begin(), t.end()) ;
        int n = s.length() ; 
        int m = t.length() ;

        // m > n as one more letter added to string 't'
        // no case of equal strings exists
        char ans ;
        for (int i = 0 ; i < m ; i ++)
        {
            if (s[i] != t[i])
            {
                ans = t[i] ;
                break ; 
            }
        }

        return ans ;
    }
};