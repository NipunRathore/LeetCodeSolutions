class Solution {
public:
    bool isvowel (char c)
    {
        c = tolower(c) ;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true ;
        }
        return false ;
    }

    bool isValid(string word) {
        if(word.length() < 3)
        {
            return false ;
        }
        bool number = false ;
        bool vowel = false ;
        bool consonant = false ;

        for(int i = 0 ; i < word.length() ; i ++)
        {
            if(word[i] >= '0' && word[i] <= '9')
            {
                number = true ;
            }
            else if(word[i] >= 'A' && word[i] <= 'Z')
            {
                if(isvowel(word[i]))
                {
                    vowel = true ;
                }
                else
                {
                    consonant = true ;
                }
            }
            else if(word[i] >= 'a' && word[i] <= 'z')
            {
                if(isvowel(word[i]))
                {
                    vowel = true ;
                }
                else
                {
                    consonant = true ;
                }
            }
            else
            {
                return false ;
            }
        }
        if(vowel == true && consonant == true)
        {
            return true ;
        }
        return false ;
    }
};