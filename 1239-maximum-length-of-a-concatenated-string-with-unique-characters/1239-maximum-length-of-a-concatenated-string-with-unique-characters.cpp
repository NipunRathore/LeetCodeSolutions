class Solution {
public:
    int solve(vector<string>& arr, string temp, int index)
    {
        unordered_set<char> st (temp.begin(), temp.end()) ;
        if (temp.length() != st.size())
        {
            return 0 ; 
        }

        int ans = temp.length() ; 
        for (int i = index ; i < arr.size() ; i ++)
        {
            ans = max(ans, solve(arr, temp + arr[i], i + 1)) ; 
        }
        return ans ; 
    }
    int maxLength(vector<string>& arr) {
        string temp = "" ; 
        int index = 0 ; 
        return solve(arr, temp, index) ; 
    }
};