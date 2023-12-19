class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int cnt = 1 ; 
        int ans = 0 ; 
        int n = grades.size() ; 

        while (n >= 0)
        {
            n -= cnt ; 
            cnt ++ ; 
            ans ++ ; 
        }
        return ans - 1 ;
    }
};