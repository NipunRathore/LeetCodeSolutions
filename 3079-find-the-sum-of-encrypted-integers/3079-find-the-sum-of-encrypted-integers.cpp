class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0 ;
        for (auto num : nums) 
        {
            int maxNum = 0 ;
            int cnt = 0 ;
            while (num) 
            {
                maxNum = max(maxNum, num % 10) ;
                num /= 10 ;
                cnt ++ ;
            }
            while (cnt --)
            {
                num = num * 10 + maxNum ; 
            }
            sum += num ;
        }
        return sum ;
    }
};