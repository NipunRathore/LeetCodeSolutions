class Solution {
public:
    int differenceOfSums(int n, int m) {
        int k = n / m ; 
        int sum = n * (n + 1) / 2 ; 
        return sum - m * k * (k + 1) ; 
    }
};