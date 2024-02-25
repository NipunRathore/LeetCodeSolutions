class Solution {
public:
    bool solve(string &word, char &x)
    {
        for (int i = 0 ; i < word.size() ; i ++)
        {
            if (word[i] == x)
            {
                return true ; 
            }
        }
        return false ; 
    }
    
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index ; 

        for (int i = 0 ; i < words.size() ; i ++)
        {
            if (solve(words[i], x))
            {
                index.push_back(i) ; 
            }
        }
        return index ; 
    }
};