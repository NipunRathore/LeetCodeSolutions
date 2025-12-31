class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int opn = 0 ; 
        for (int x : nums)
        {
            if (x % 3 != 0)
            {
                opn ++ ; 
            }
        }
        return opn ; 
    }
};