class Solution {
public:
// Maintain 2 counters 
// Whenever 3 consecutive A present -> cntAlice ++ ;
// Whenever 3 consecutive B present -> cntBob ++ ;

// return true is cntAlice > cntBob i.e., true if Alice moved on the last turn and Bob couldnt
// else false i.e., if cntAlice == cntBob i.e., if Bob moved on last turn and Alice couldn't
    bool winnerOfGame(string colors) {
        int cntAlice = 0 ; 
        int cntBob = 0 ; 

        for (int i = 1 ; i < colors.size() - 1 ; i ++)
        {
            if (colors[i - 1] == 'A' && colors[i] == 'A' && colors[i + 1] == 'A')
            {
                cntAlice ++ ;
            }

            else if (colors[i - 1] == 'B' && colors[i] == 'B' && colors[i + 1] == 'B')
            {
                cntBob ++ ; 
            }
        }
        return cntAlice > cntBob ; 
    }
};
// T.C. = O(N)
// S.C. = O(1)