class Solution {
public:
// two pointer approach 
// compare characters at beginning and ending of string 
// if same, increment start & decrement end until not same 
// then calculate minimum substring length by subtracting start pointer position from end pointer position 
    int minimumLength(string s) {
        int left = 0 ;
        int right = s.size() - 1 ;

        while (left < right)
        {
            char curr = s[left] ;
            if (s[left] != s[right])
            {
                break ;
            }

            while (left <= right && s[left] == curr)
            {
                left ++ ; 
            }
            while (left <= right && s[right] == curr)
            {
                right -- ; 
            }
        }
        return left > right ? 0 : right - left + 1 ; 
    }
};