class Solution {
public:
    bool isPalindrome(string &str, int start, int end)
    {
        while (start < end)
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

    void solve(string &str, int start, vector<string>& path, vector<vector<string> > &result)
    {
        if (start == str.length())
        {
            result.push_back(path) ; 
            return ; 
        }

        for (int end = start ; end < str.length() ; end ++)
        {
            if (isPalindrome(str, start, end))
            {
                path.push_back(str.substr(start, end - start + 1)) ; 
                solve(str, end + 1, path, result) ; 
                path.pop_back() ; 
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string> > result ; 
        vector<string> path ; 
        solve(s, 0, path, result) ; 
        return result ; 
    }
};