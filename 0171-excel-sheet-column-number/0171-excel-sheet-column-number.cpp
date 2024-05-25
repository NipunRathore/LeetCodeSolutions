class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0 ; 
        for (int i = 0 ; i < columnTitle.length() ; i ++)
        {
            int val = columnTitle[i] - 64 ; 
            res = res * 26 + val ; 
        }
        return res ; 
    }
};