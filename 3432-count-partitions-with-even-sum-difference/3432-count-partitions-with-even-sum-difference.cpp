class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0 ;
        int n = nums.size() ;
        for (auto i : nums) 
        {
            sum += i ;
        }

        if (sum % 2 != 0)
        {
            return 0 ;
        }

        return n - 1 ;
    }
};