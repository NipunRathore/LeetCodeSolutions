class Solution {
private:
    void solve(string digits, int index, string output, vector<string>& ans, vector<string>& digitToString)
    {
        // base case - when index goes beyond string digits then store current combination & return 
        if (index >= digits.length())
        {
            ans.push_back(output) ; 
            return ; 
        }

        // process current digit of digit string 
        int num = digits[index] - '0' ; 
        // fetch corresponding string from mapping
        string val = digitToString[num] ; 

        // iterate through each letter of string 
        for (int i = 0 ; i < val.length() ; i ++)
        {
            // add to combination string 
            output.push_back(val[i]) ; 
            // make next recursive call 
            solve(digits, index + 1, output, ans, digitToString) ; 
            // backtracking to explore all combinations 
            output.pop_back() ; 
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        // vectors that stores all combinations 
        vector<string> ans ; 
        if (digits.length() == 0)
        {
            return ans ; 
        }
        // combination string 
        string output = "" ; 
        int index = 0 ; 
        // mapping of digit to letters on phone keypad
        vector<string> digitToString = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"} ;
        solve(digits, index, output, ans, digitToString) ;

        return ans ; 
    }
};