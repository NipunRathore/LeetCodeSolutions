class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int count = 0 ; 
        for (int i = 0 ; i < derived.size() ; i ++)
        {
            if (derived[i] == 1)
            {
                count ++ ; 
            }
        }
        if (count % 2 == 0)
        {
            return true ; 
        }
        return false ; 
    }
};