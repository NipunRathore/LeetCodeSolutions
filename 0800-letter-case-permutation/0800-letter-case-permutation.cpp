class Solution {
public:
// BACKTRACKING 
// similar approach to subsets & subsequences 
// we used EXCLUDE & INCLUDE over there 

// here, you have 2 cases
// I. INCLUDE the current character as it is 
// II. INCLUDE the current character after changing its case 
void solve(string &s, int index, string output, unordered_set<string>& ans)
{
    if (index >= s.length())
    {
        ans.insert(output) ; 
        return ; 
    }

    // include the current character as it is 
    char element = s[index] ;
    output.push_back(element) ; 
    solve(s, index + 1, output, ans) ; 
    output.pop_back() ;

    // include the current character after changing its case 
    if (isupper(element))
    {
        element = tolower(element) ; 
    }
    else element = toupper(element) ; 
    output.push_back(element) ; 
    solve(s, index + 1, output, ans) ; 
    output.pop_back() ;
}
    vector<string> letterCasePermutation(string s) {
        // set as we need only unique permutations 
        unordered_set<string> ans ; 
        // store individual permutation
        string output = "" ; 
        int index = 0 ; 
        solve(s, index, output, ans) ; 
        
        vector<string> result ; 
        for (string str : ans)
        {
            result.push_back(str) ; 
        }
        return result ; 
    }
};