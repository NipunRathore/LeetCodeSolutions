class Solution {
public:
    int solve(int n)
    {
        // base case
        if (n == 0)
        {
            return 0 ; 
        }

        if (n == 1)
        {
            return 1 ; 
        }

        return fib(n - 1) + fib(n - 2) ; 
    }

    int fib(int n) {
        if (n < 2)
        {
            return n ; 
        }
        
        int a = 0 ; 
        int b = 1 ; 

        int c ; 
        for (int i = 2 ; i <= n ; i ++)
        {
            c = a + b ; 
            a = b ; 
            b = c ; 
        }
        return b ; 
    }
};