class Solution {
public:
// hashmap to keep track of sums and their frequencies 
// maintain current sum 
// for each current sum, check whether there is a previous stored sum s.t., difference between current sum & prev stored sum equals target sum k
// if sum found, frequency of prev sum added to answer 
// increment frequency of current sum 
    int subarraySum(vector<int>& nums, int k) {
        // map to store sums with their frequencies 
        unordered_map<int, int> mp ; 

        int currSum = 0 ; 
        int cnt = 0 ; 

        // initialize map with sum 0 and frequency 1 
        mp[currSum] = 1 ; 
        for (int i = 0 ; i < nums.size() ; i ++)
        {
            // add current element to current sum 
            currSum += nums[i] ; 

            // if there is previously stored subarray with sum (currSum - k), 
            // add it's frequency to answer
            int prevSum = currSum - k ; 
            if (mp.find(prevSum) != mp.end())
            {
                cnt += mp[prevSum] ; 
            }

            // increment frequency of current sum 
            mp[currSum] ++ ; 
        }
        // cnt of all subarrays with sum = k 
        return cnt ; 
    }
};
// T.C. = O(N)
// S.C. = O(N)
// Optimised Approach using Maps & Prefix Sum