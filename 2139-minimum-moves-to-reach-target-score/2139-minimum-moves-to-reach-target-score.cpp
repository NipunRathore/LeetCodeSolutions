class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        // approach from target to 1 to get minimum moves
        int count = 0 ; 
        // while MAXDOUBLES are available 
        while (maxDoubles && target != 1)
        {
            // if target ODD
            // reduce target by 1, increase operation
            if (target % 2 == 1)
            {
                count ++ ; 
                target -- ; 
            }
            // if target EVEN
            // divide target by 2, reduce maxDoubles by 1, increase operation count 
            else
            {
                maxDoubles -- ; 
                target /= 2 ; 
                count ++ ; 
            }
        }
        // now maxDoubles are 0 
        // only one way to reach 0 i.e., by decrementing 
        return count + target - 1 ; 
    }
};