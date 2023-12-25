class Solution {
public:
// stoi function -> string to integer
// substr (index, len) -> create substring from the given index & of specified length
    int solve(int index, string &s, vector<int> &dp)
    {
        // entire string processed
        if (index == s.length())
        {
            return 1 ; 
        }

        // if index goes beyond string OR char at current index is '0' then return 0 
        if (index > s.length() || s[index] == '0')
        {
            return 0 ; 
        }

        // MEMOIZATION
        if (dp[index] != -1)
        {
            return dp[index] ; 
        }
        
        // no. of decoding ways by taking single char at this index 
        int takeSingle = 0 ; 
        // no. of decoding ways by taking double char from this index
        int takeDouble = 0 ;

        // int by converting substring of 1 length at index into an integer 
        int singleChar = stoi(s.substr(index, 1)) ; 
        // int by converting substring of 2 length from index into an integer 
        int doubleChar = stoi(s.substr(index, 2)) ;

        // if singleChar integer is greater than 0 & obviously less than 10 
        // because no mapping for 0 in alphabets 
        if (singleChar > 0)
        {
            takeSingle = solve(index + 1, s, dp) ; 
        }

        // doubleChar integer less than 27 and obviously greater than 9
        // because last alphabet 'Z' maps to 26
        if (doubleChar <= 26)
        {
            takeDouble = solve(index + 2, s, dp) ;
        }

        // total ways = ways by takingSingle + takingDouble characters 
        return dp[index] = takeSingle + takeDouble ; 
    }

    int numDecodings(string s) {
        // 1-D DP array as only 1 variable non-constant 
        vector<int> dp(s.length(), -1) ;
        int index = 0 ; 
        return solve(index, s, dp) ;  
    }
};