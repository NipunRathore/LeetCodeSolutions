class Solution {
public:
    int countKeyChanges(string s) {
        int changed = 0 ;
        for(int i = 0 ; i < s.size() ; i ++) 
        {
            if(s[i] >= 'A' && s[i] <= 'Z') 
            {
                s[i] = s[i] + 32 ;
            }
        }

        for(int i = 1 ; i < s.size() ; i ++) 
        {
            if(s[i] != s[i - 1]) 
            {
                changed ++ ;
            }
        }
        return changed ;
    }
};