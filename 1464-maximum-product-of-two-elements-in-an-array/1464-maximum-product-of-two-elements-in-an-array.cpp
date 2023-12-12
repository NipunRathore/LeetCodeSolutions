class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = INT_MIN ;
        int n = nums.size() ;  
        for (int i = 0 ; i < n - 1 ; i ++)
        {
            for (int j = i + 1 ; j < n ; j ++)
            {
                maxProd = max (maxProd, (nums[i] - 1) * (nums[j] - 1)) ; 
            }
        }
        return maxProd ; 
    }
};
// T.C. = O(N^2)
// S.C. = O(1)


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n = nums.size() ; 
//         sort(nums.begin(), nums.end()) ; 
//         return (nums[n - 1] - 1) * (nums[n - 2] - 1) ; 
//     }
// };
// T.C. = O(N*logN)
// S.C. = O(1)