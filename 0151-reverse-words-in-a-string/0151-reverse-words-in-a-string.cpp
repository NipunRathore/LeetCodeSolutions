class Solution {
public:
    string reverseWords(string s) {
        // stack to store the words in the string 's' 
        stack<string> st ; 
        // resultant string 
        string res = "" ; 

        for (int i = 0 ; i < s.size() ; i ++)
        {
            // string to store individual words of string 's'
            string word = "" ; 
            if (s[i] == ' ')
            {
                continue ; 
            }

            while (i < s.size() && s[i] != ' ')
            {
                word += s[i] ; 
                i ++ ;
            }

            // store the current word in the stack 
            st.push(word) ; 
        }

        // store the words stored in stack into the 'result' string 
        while (!st.empty())
        {
            res += st.top() ;
            st.pop() ; 

            // add a space ' ' after every word 
            if (!st.empty())
            {
                res += ' ' ; 
            }
        }
        return res ; 
    }
};