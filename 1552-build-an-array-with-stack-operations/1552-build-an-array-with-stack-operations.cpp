class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res ; 

        int j = 0 ;
        for (int i = 0 ; i < n ; i ++)
        {
            if (target[j] == i + 1)
            {
                j ++ ; 
                res.push_back("Push") ; 
                if (j == target.size())
                {
                    return res ; 
                }
            }
            else
            {
                res.push_back("Push") ; 
                res.push_back("Pop") ;
            }
        }
        return res ; 
    }
};