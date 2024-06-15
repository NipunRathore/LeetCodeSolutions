class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> arr(n, 1) ; 
        while (k != 0)
        {
            for (int i = 1 ; i < n ; i ++)
            {
                arr[i] = (arr[i] + arr[i - 1] ) % 1000000007 ; 
            }
            k -- ; 
        }
        return arr[n - 1] ; 
    }   
};