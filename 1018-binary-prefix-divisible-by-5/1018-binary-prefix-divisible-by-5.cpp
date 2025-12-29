class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans ;
        int val = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            val = (val * 2 + nums[i]) % 5;
            ans.push_back(val % 5 == 0);
        }
        return ans;
    }
};