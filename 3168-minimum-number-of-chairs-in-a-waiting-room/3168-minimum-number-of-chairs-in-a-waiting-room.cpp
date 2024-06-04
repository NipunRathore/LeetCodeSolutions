class Solution {
public:
    int minimumChairs(string s) {
        stack<char> st ;
        int max = 0 ;
        int temp = 0 ;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(s[i] == 'E')
            {
                st.push(s[i]) ;
            }
            else if(s[i] == 'L' && i != s.size() - 1)
            {
                st.pop() ;
            }

            temp = st.size() ;

            if(temp > max)
            {
                max = temp ;
            }
        }
        return max ;
    }
};