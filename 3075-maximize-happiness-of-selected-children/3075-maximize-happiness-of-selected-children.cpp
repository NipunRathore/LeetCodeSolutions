class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0 ;
        sort(happiness.begin(), happiness.end(), greater<int>() ) ;
        
        for(int i = 0 ; i < k ; i ++)
        {
           ans += max(0, happiness[i] - i) ;
        }
        return ans ;
    }
};