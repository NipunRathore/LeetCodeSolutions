class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        // create vector of pair "<nums[index], index>"
        vector<pair<int, int> > arr (nums.size()) ; 

        // store nums array in the arr array 
        for (int i = 0 ; i < nums.size() ; i ++)
        {
            arr[i].first = nums[i] ; 
            arr[i].second = i ; 
        }

        // sort on basis of 'first' value
        sort(arr.begin(), arr.end()) ; 

        for (int i = 0 ; i < nums.size() ; i ++)
        {
            for (int j = i + 1 ; j < nums.size() ; j ++)
            {
                if (arr[i].first + valueDiff >= arr[j].first)
                {
                    if (abs(arr[i].second - arr[j].second) <= indexDiff)
                    {
                        return true ; 
                    }
                }
                else
                {
                    break ; 
                }
            }
        }
        return false ; 
    }
};