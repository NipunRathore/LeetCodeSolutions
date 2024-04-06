class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st ; 
        string ans = "" ; 

        for (int i = 0 ; i < s.length() ; i ++)
        {
            // if an opening parenthesis -> store indices 
            if (s[i] == '(')
            {
                st.push(i) ; 
            }

            // if a closing parenthesis 
            if (s[i] == ')')
            {
                // if stack is not empty means an opening parenthesis present 
                // so pop the matching parenthesis 
                if (!st.empty())
                {
                    st.pop() ; 
                }
                // else mark unmatched closing parenthesis with space
                else 
                {
                    s[i] = ' ' ; 
                }
            }
        }

        // remove unmatched opening parenthesis by marking them with spaces 
        while (!st.empty())
        {
            s[st.top()] = ' ' ; 
            st.pop() ; 
        }

        // construct answer string by removing spaces 
        for (auto ch : s)
        {
            if (ch != ' ')
            {
                ans += ch ; 
            }
        }
        return ans ; 
    }
};