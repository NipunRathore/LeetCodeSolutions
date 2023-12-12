class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        // store {userID, setOf(activeMinutes)}
        // need "Unique Minutes" therefore used Set that stores only unique values 
        unordered_map<int, unordered_set<int> > mp ; 
        for (int i = 0 ; i < logs.size() ; i ++)
        {
            int userID = logs[i][0] ; 
            int time = logs[i][1] ; 
            mp[userID].insert(time) ; 
        }

        vector<int> ans (k, 0) ; 
        // find unique active minutes for each user & update ans vector 
        for (auto i : mp)
        {
            // size of unordered_set 
            int size = i.second.size() ;
            // update ans vector at index = size - 1
            if (size <= k)
            {
                ans[size - 1] ++ ;
            }
        }
        return ans ; 
    }
};