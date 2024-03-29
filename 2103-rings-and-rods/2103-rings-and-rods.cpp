class Solution {
public:
    int countPoints(string rings) {
        int n = rings.size() ; 
        unordered_map<char, set<char> > mp ; 
        for (int i = 1 ; i <= n ; i += 2)
        {
            mp[rings[i]].insert(rings[i - 1]) ; 
        }

        int cnt = 0 ; 
        for (auto it : mp)
        {
            if (it.second.size() == 3)
            {
                cnt ++ ; 
            }
        }
        return cnt ; 
    }
};