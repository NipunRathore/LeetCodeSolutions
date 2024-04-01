class Solution {
public:
    int lengthOfLastWord(string s) {
        // need to find length of LAST word. So, we use stack 
        stack<char> st ; 
        int cnt = 0 ; 
        // store the string into the stack
        for (int i = 0 ; i < s.length() ; i ++)
        {
            st.push(s[i]) ; 
        }

        // pop the string till the top element of stack is a space ' '
        // remove all the spaces in the end 
        while (st.top() == ' ')
        {
            st.pop() ; 
        }

        // increase cnt of characters till you find another space ' ' or stack gets empty 
        while (!st.empty() && st.top() != ' ')
        {
            cnt ++ ; 
            st.pop() ; 
        }

        return cnt ; 
    }
};