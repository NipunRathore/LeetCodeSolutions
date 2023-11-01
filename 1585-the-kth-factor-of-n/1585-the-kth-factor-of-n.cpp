class Solution {
public:
    int kthFactor(int n, int k) {
        int res = n ; 
        int cnt = 0 ; 
        for (int i = 1 ; i <= n ; i ++)
        {
            if (n % i == 0)
            {
                k -- ; 
            }

            if (k == 0)
            {
                return i ; 
            }
        }
        return -1 ;
    }
};

// class Solution {
// public:
//     int kthFactor(int n, int k) {
//         vector<int> factor ; 
//         for (int i = 1 ; i <= n ; i ++)
//         {
//             if (n % i == 0)
//             {
//                 factor.push_back(i) ; 
//             }
//         }
//         if (factor.size() < k)
//         {
//             return -1 ; 
//         }
//         return factor[k - 1] ; 
//     }
// };
// S.C. = O(n)
// T.C. = O(n)