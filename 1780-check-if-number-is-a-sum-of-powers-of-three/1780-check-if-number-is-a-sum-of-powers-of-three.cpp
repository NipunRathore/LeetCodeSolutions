class Solution {
public:
    bool checkPowersOfThree(int n) {
        // keep dividing 'n' by 3 till n > 0
        // at each step, find remainder when divided by 3
        // if remainder = 2, then NOT SUM OF POWER OF THREE, so return FALSE 
        while (n > 1)
        {
            if (n % 3 == 2)
            {
                return false ; 
            }
            n /= 3 ; 
        }
        // if n becomes 1, means n is a sum of powers of three
        return n == 1 ; 
    }
};