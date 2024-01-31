class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size()) ;
        // stack to store index of temp
        stack<int> st ;

        // iterate in reverse order 
        for (int i = temperatures.size() - 1 ; i >= 0 ; i --)
        {
            // check if stack not empty & temp of top element(index) of stack is smaller than current index temp
            while (!st.empty() && temperatures[st.top()] <= temperatures[i])
            {
                // if yes, pop 
                st.pop() ;
            }

            // otherwise, we found a temp larger than current index temp
            // number of days will be the difference between current index & top element of stack 
            ans[i] = st.empty() ? 0 : st.top() - i ;
            // add current index on top of stack 
            st.push(i) ;
        }
        return ans ;
    }
};
// T.C. = O(N)
// S.C. = O(N)