class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end()) ; 
        int curr = 0 ; 

        for (int i = 0 ; i < arr.size() ; i ++)
        {
            if (arr[i] > curr)
            {
                curr ++ ; 
            }
        }
        return curr ; 
    }
};