class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int x = 0 ; 
        vector<int> arr ; 

        for (auto i : bank)
        {
            x = 0 ; 
            for (auto j : i)
            {
                if (j == '1')
                {
                    x ++ ; 
                }
            }
            if (x > 0)
            {
                arr.push_back(x) ; 
            }
        }

        int ans = 0 ;
        if (arr.size() <= 1)
        {
            return ans ; 
        }

        for (int i = 0 ; i < arr.size() - 1 ; i ++)
        {
            ans += arr[i] * arr[i + 1] ; 
        }

        return ans ; 
    }
};