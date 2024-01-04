class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp ; 
        // store {element, freq} of all elements of nums 
        for (int i = 0 ; i < nums.size() ; i ++)
        {
            mp[nums[i]] ++ ;
        }

        int cnt = 0 ; 
        for (auto it : mp)
        {
            int temp = it.second ; 
            // if some element frequency is 1, meaning unique element
            if (temp == 1)
            {
                return -1 ; 
            }
            // if element frequency is divisible by 3
            if (temp % 3 == 0)
            {
                cnt += temp / 3 ;
            }
            // if frequency not divisible by 3 
            else
            {
                cnt += (temp / 3) + 1 ; 
            }
        }
        return cnt ; 
    }
};