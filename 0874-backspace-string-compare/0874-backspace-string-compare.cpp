class Solution {
public:
// CREATING THE FINAL STRINGS AFTER BACKSPACE OPERATIONS
    bool backspaceCompare(string s, string t) {
        vector<char> str1, str2 ;

        for (char ch : s)
        {
            // if a to z then store 
            if (ch >= 'a' && ch <= 'z')
            {
                str1.push_back(ch) ; 
            }

            // if # means backspace so pop last inserted 
            else if (ch == '#' && !str1.empty())
            {
                str1.pop_back() ; 
            }
        }

        for (char ch : t)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                str2.push_back(ch) ;
            } 

            else if (ch == '#' && !str2.empty())
            {
                str2.pop_back() ;
            }
        }

        // if both strings formed after backspace operations are equal return true else false 
        return str1 == str2 ; 
    }
};
// T.C. = O (N)
// S.C. = O (N)