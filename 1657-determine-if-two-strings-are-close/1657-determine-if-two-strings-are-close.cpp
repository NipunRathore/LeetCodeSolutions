class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // if lengths are different, strings can't be close 
        if (word1.size() != word2.size())
        {
            return false ; 
        }

        // arrays to store frequencies of characters in the string 
        vector<int> arr1 (26, 0) ; 
        vector<int> arr2 (26, 0) ; 
        for (auto ch : word1)
        {
            arr1[ch - 'a'] ++ ; 
        }
        for (auto ch : word2)
        {
            arr2[ch - 'a'] ++ ; 
        }

        set<char> st1 ; 
        set<char> st2 ; 
        for (auto ch : word1)
        {
            st1.insert(ch) ; 
        }
        for (auto ch : word2)
        {
            st2.insert(ch) ; 
        }

        sort(arr1.begin(), arr1.end()) ; 
        sort(arr2.begin(), arr2.end()) ; 
        // if frequencies same, regardless of which character 
        for (int i = 0 ; i < 26 ; i ++)
        {
            // if not same return false 
            if (arr1[i] != arr2[i])
            {
                return false ;
            }
        }
        // check if both words have same alphabets
        if (st1 != st2)
        {
            return false ; 
        }
        
        // if frequencies equal & both words have same characters then return true 
        return true ; 
    }
};