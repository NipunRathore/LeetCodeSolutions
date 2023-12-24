class Solution {
public:
    int minOperations(string s) {
        int startZero = 0 ; 
        int n = s.length() ; 

        for (int i = 0 ; i < n ; i ++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                {
                    startZero ++ ; 
                }
            }
            else 
            {
                if (s[i] == '0')
                {
                    startZero ++ ; 
                }
            }
        }
        return min (startZero, n - startZero) ; 
    }
};
// T.C. = O(N)
// S.C. = O(1)

// class Solution {
// public:
//     int minOperations(string s) {
//         int cnt1 = 0 ;
//         int cnt2 = 0 ; 

//         char ch1 = '0' ; 
//         char ch2 = '1' ;

//         for (int i = 0 ; i < s.length() ; i ++)
//         {
//             if (s[i] == ch1)
//             {
//                 cnt1 ++ ; 
//             }

//             if (s[i] == ch2)
//             {
//                 cnt2 ++ ; 
//             }

//             swap(ch1, ch2) ; 
//         }
//         return min(cnt1, cnt2) ; 
//     }
// };
// T.C. = O(N)
// S.C. = O(1)