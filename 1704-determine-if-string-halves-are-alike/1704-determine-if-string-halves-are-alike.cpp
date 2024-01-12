class Solution {
public:
    bool halvesAreAlike(string s) {
        int Acnt = 0 ; 
        int Bcnt = 0 ; 

        for (int i = 0 ; i < s.length() / 2 ; i ++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]== 'u' || 
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i]== 'U')
            {
                Acnt ++ ;
            }
        }

        for (int i = s.length() / 2 ; i < s.length() ; i ++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]== 'u' || 
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i]== 'U')
            {
                Bcnt ++ ;
            }
        }

        return Acnt == Bcnt ; 
    }
};
// T.C. = O(N), N -> length of string 
// S.C. = O(1)