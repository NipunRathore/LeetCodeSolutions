class Solution {
public:
    string finalString(string s) {
        string str = "" ; 
        for (int i = 0 ; i < s.length() ; i ++)
        {
            if (s[i] == 'i')
            {
                reverse(str.begin(), str.end()) ; 
            }
            else
            {
                str += s[i] ; 
            }
        }
        return str ; 
    }
};