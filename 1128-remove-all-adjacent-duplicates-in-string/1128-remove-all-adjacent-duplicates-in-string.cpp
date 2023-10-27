class Solution {
public:
// Only Adjacent Duplicates to be removed,
// NOT ALL DUPLICATES

// therefore, compare current element being inserted to answer string with last element in the answer string
    string removeDuplicates(string s) {
        string ans = "" ; 

        for (int i = 0 ; i < s.size() ; i ++)
        {
            // if ADJACENT DULPICATES
            // remove last inserted element
            if (ans.size() && ans.back() == s[i])
            {
                ans.pop_back();
            }
            // if NOT ADJACENT DUPLICATE
            // add character to string
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans ; 
    }
};