class Solution {
public:
    bool isPalindrome(string& word)
    {
        int start = 0 ; 
        int end = word.size() - 1 ; 

        while (start <= end)
        {
            if (word[start] != word[end])
            {
                return false ; 
            }
            start ++ ; 
            end -- ; 
        }
        return true ;
    }

    string firstPalindrome(vector<string>& words) {
        for (int i = 0 ; i < words.size() ; i ++)
        {
            string word = words[i] ; 

            if (isPalindrome(word))
            {
                return word ; 
            }
        }
        return "" ; 
    }
};