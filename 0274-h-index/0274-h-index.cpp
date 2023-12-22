class Solution {
public:
    int hIndex(vector<int>& citations) {
        // Sort Array in DESCENDING order using Greater function 
        // if an element is greater than it's position, increment Index
        int h_Index = 0 ; 
        sort(citations.begin(), citations.end(), greater<int>() ) ; 

        for (int i = 0 ; i < citations.size() ; i ++)
        {
            if (citations[i] > i)
            {
                h_Index ++ ; 
            }
        }
        return h_Index ; 
    }
};
// T.C. = O(N * logN)
// S.C. = O(1)

// class Solution {
// public:
//     int hIndex(vector<int>& citations) {
//         int h_Index = 0 ; 
//         sort(citations.begin(), citations.end()) ; 

//         int n = citations.size() ; 
//         for (int i = 0 ; i < n ; i ++)
//         {
//             if ((n - i) <= citations[i])
//             {
//                 h_Index = max(h_Index, n - i) ;
//             }
//         }
//         return h_Index ; 
//     }
// };
// T.C. = O(N * logN)
// S.C. = O(1)