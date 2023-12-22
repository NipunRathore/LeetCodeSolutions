class Solution {
public:
    int maxScore(string s) {
        int oneCnt = 0 ; 
        int zeroCnt = 0 ; 
        int score = INT_MIN ; 
        int currScore ; 

        for (int i = 0 ; i < s.length() ; i ++)
        {
            if (s[i] == '1')
            {
                oneCnt ++ ; 
            }
        }
        
        for (int i = 0 ; i < s.length() - 1 ; i ++)
        {
            if (s[i] == '0')
            {
                zeroCnt ++ ; 
            }
            else
            {
                oneCnt -- ; 
            }

            currScore = zeroCnt + oneCnt ; 

            if (currScore > score)
            {
                score = currScore ;
            }
        }
        return score ; 
    }
};