class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // hashmap to store prefix sums with indices 
        unordered_map<int, int> mp ; 
        mp[0] = -1 ; 
        int currSum = 0 ; 
        int maxLen = 0 ; 

        for (int i = 0 ; i < nums.size() ; i ++)
        {
            // update sum according to element 
            currSum += (nums[i] == 1) ? 1 : -1 ; 

            // if sum encountered again (there is a subarray with equal 1 and 0 between previous occurence and current index)
            // update maximum length if current length of subarray is greater than previously stored maximum length 
            if (mp.find(currSum) != mp.end())
            {
                maxLen = max(maxLen, i - mp[currSum]) ; 
            }
            else
            {
                mp[currSum] = i ;
            }
        }
        return maxLen ; 
    }
};
// T.C. = O(N)
// S.C. = O(N)

// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         int maxLen = 0 ; 
//         int n = nums.size() ; 

//         for (int i = 0 ; i < n ; i ++)
//         {
//             int cntZero = 0 ; 
//             int cntOne = 0 ; 

//             for (int j = i ; j < n ; j ++)
//             {
//                 if (nums[j] == 0)
//                 {
//                     cntZero ++ ; 
//                 }
//                 else
//                 {
//                     cntOne ++ ; 
//                 }

//                 if (cntZero == cntOne)
//                 {
//                     maxLen = max(maxLen, j - i + 1) ; 
//                 }
//             }
//         }
//         return maxLen ; 
//     }
// };
// // T.C. = O (N * N)
// // S.C. = O (1)