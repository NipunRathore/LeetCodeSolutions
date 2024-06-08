class Solution {
public:
    string clearDigits(string s) {
        string ans = "" ;
        int n = s.size() ;
        for(int i = 0 ; i < n ; i ++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                if (!ans.empty()) 
                {
                    ans.pop_back() ;
                }
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                ans.push_back(s[i]) ;
            }
        }
        return ans ;
    }
};