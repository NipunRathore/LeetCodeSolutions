class Solution {
public:
double powerUtil(double x, int n)
{
    if (n == 0)
    {
        return 1 ; 
    }

    if (n == 1)
    {
        return x ; 
    }

    double ans = powerUtil(x, n / 2) ; 

    if (n % 2 == 1)
    {
        return ans * ans * x ; 
    }

    else
    {
        return ans * ans ; 
    }
}
    double myPow(double x, int n) {
        // solution - 1 
        return pow(x, n) ;

        // solution - 2
        // DOES NOT WORK FOR NEGATIVE POWERS 
        // double ans = 1 ; 
        // for (int i = 0 ; i < n ; i ++)
        // {
        //     ans = ans * x ; 
        // }
        // return ans ; 

        // solution - 3 
        // DOES NOT WORK FOR NEGATIVE POWERS
        // return powerUtil(x, n) ; 
    }
};