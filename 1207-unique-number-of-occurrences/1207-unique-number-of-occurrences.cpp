class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // to store elements and their frequency
        unordered_map<int, int> mp ; 
        for (auto it : arr)
        {
            mp[it] ++ ; 
        }

        // store frequencies in set 
        unordered_set<int> st ; 
        for (auto it : mp)
        {
            st.insert(it.second) ; 
        }
        
        // if frequency of each element in array is unique return true 
        if (st.size() == mp.size())
        {
            return true ; 
        }
        return false ;
    }
};