class Solution {
public:
    int minSteps(string s, string t) {
        // storing difference of frequencies of characters in 's' & 't' 
        vector<int> arr (26, 0) ; 
        for (auto ch : s)
        {
            // increment frequencies for string 's'
            arr[ch - 'a'] ++ ;
        }
        for (auto ch : t)
        {
            // decrement frequencies for string 't' 
            arr[ch - 'a'] -- ; 
        }

        int ans = 0 ; 
        for (auto i : arr)
        {
            // adding the difference stored where 't' has more instances than 's' 
            if (i > 0)
            {
                ans += i ; 
            }
        }

        return ans ; 
    }
};