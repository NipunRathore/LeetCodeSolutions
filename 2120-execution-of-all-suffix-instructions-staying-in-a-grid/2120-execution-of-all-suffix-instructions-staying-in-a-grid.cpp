class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> ans ;  

        for (int i = 0 ; i < s.length() ; i ++)
        {
            int cnt = 0 ; 
            int y = startPos[0] ; 
            int x = startPos[1] ; 

            for (int j = i ; j < s.length() ; j ++)
            {
                if (s[j] == 'L')
                {
                    x -- ; 
                }
                else if (s[j] == 'R')
                {
                    x ++ ; 
                }
                else if (s[j] == 'U')
                {
                    y -- ; 
                }
                else 
                {
                    y ++ ; 
                }

                if ((y >= 0 && y < n) && (x >= 0 && x < n))
                {
                    cnt ++ ; 
                }
                else 
                {
                    break ; 
                }
            }
            ans.push_back(cnt) ; 
        }
        return ans ; 
    }
};