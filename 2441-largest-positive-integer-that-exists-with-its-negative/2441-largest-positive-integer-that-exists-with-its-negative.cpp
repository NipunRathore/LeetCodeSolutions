class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> mp ; 
        for (int i = 0 ; i < nums.size() ; i ++)
        {
            mp[nums[i]] ++ ; 
        }

        sort(nums.begin(), nums.end(), greater<int>()) ;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(nums[i] > 0 && mp[-1*nums[i]] > 0) 
            {
                return nums[i] ;
            }
            if(nums[i]<0) 
            {
                break ;
            }
        }
        return -1;
    }
};