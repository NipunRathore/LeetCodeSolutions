class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        int maxVal1 = INT_MIN, minVal1 = INT_MAX ; 
        int maxVal2 = INT_MIN, minVal2 = INT_MAX ; 
        int maxVal3 = INT_MIN, minVal3 = INT_MAX ; 
        int maxVal4 = INT_MIN, minVal4 = INT_MAX ; 

        int n = min (arr1.size(), arr2.size()) ; 
        for (int i = 0 ; i < n ; i ++)
        {
            int val1 = arr1[i] + arr2[i] + i ; 
            int val2 = arr1[i] + arr2[i] - i ; 
            int val3 = arr1[i] - arr2[i] + i ; 
            int val4 = arr1[i] - arr2[i] - i ;

            maxVal1 = max(maxVal1, val1) ; 
            maxVal2 = max(maxVal2, val2) ; 
            maxVal3 = max(maxVal3, val3) ;
            maxVal4 = max(maxVal4, val4) ; 
            minVal1 = min(minVal1, val1) ; 
            minVal2 = min(minVal2, val2) ; 
            minVal3 = min(minVal3, val3) ; 
            minVal4 = min(minVal4, val4) ;  
        }

        int ans = max(max((maxVal1 - minVal1), (maxVal2 - minVal2)), max((maxVal3 - minVal3), (maxVal4 - minVal4))) ; 
        return ans ; 
    }
};