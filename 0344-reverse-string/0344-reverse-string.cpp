class Solution {
private:
    void solve(vector<char>&s, int start, int end)
    {
        // base case
        if (start >= end)
        {
            return ; 
        }

        // processing
        swap(s[start], s[end]) ; 
        start ++ ; 
        end -- ; 

        // recursion
        solve(s, start, end) ; 
    }
public:
    void reverseString(vector<char>& s) {

        // SOLUTION - 1
        // reverse(s.begin(), s.end()) ; 

        // SOLUTION - 2
        // int start = 0 ; 
        // int end = s.size() - 1 ; 
        // while (start < end)
        // {
        //     swap(s[start], s[end]) ; 
        //     start ++ ; 
        //     end -- ; 
        // }

        // SOLUTION - 3
        int start = 0 ; 
        int end = s.size() - 1 ; 
        solve(s, start, end) ; 
    }
};