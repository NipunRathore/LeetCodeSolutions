class Solution {
public:
    bool isPalindrome(string &str, int start, int end)
    {
        // if empty string consider non palindrome 
        if(str.length() == 0)
        {
            return false ; 
        }

        while (start <= end)
        {
            if (str[start] != str[end])
            {
                return false ; 
            }
            start ++ ; 
            end -- ; 
        }

        return true ; 
    }

    int countSubstrings(string s) {
        int n = s.length() ; 
        int cnt = 0 ; 

        // generate all substrings from every index 'i' 
        for (int i = 0 ; i < n ; i ++)
        {
            // generate substring of length 'j'
            for (int j = 1 ; j <= n - i ; j ++)
            {
                // if palindrome increase count 
                if(isPalindrome(s, i, j + i - 1))
                {
                    cnt ++ ; 
                }
            }
        }
        return cnt ; 
    }
};
// T.C. = O(N ^ 3)
// S.C. = O(1)