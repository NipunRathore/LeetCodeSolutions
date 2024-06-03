class Solution {
public:
    int appendCharacters(string s, string t) {
        int k = 0 ;
        int count = 0 ;

        for(int i = 0 ; i < s.length() ; i ++)
        {
            if(s[i] == t[k])
            {
                count ++ ;
                k ++ ;
            }
        }
        return t.length() - count ;
    }
};