class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = 0 ; 
        unordered_set<char> st(allowed.begin(), allowed.end()) ; 

        // traverse in each char of each string of words vector 
        // if we find the character is not present in unordered set, increase count of inconsistent variable 
        // Traversal = O(n * k)
        for (int i = 0 ; i < words.size() ; i ++)
        {
            for (int j = 0 ; j < words[i].size() ; j ++)
            {
                if (st.find(words[i][j]) == st.end())
                {
                    res ++ ; 
                    break ; 
                }
            }
        }
        // return number of consistent strings by subtracting inconsistence strings from size of vector words 
        return words.size() - res ; 
    }
};
// T.C. = O(N * K)
// S.C. = O(M)