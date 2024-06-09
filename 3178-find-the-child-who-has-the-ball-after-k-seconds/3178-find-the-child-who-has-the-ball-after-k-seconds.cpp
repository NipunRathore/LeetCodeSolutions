class Solution {
public:
    int numberOfChild(int n, int k) {
        int rounds = k / (n - 1) ;
        int number = k % (n - 1) ;
        int ans = 0 ;

        if(rounds % 2 == 0 || rounds == 0)
        {
            ans = number ;
        }
        else if(rounds % 2 != 0)
        {
            ans = n - 1 - number ;
        }
        return ans ;
    }
};