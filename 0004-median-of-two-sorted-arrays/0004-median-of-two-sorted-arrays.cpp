class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp ; 

        for (auto i : nums1)
        {
            temp.push_back(i) ;
        }

        for (auto i : nums2)
        {
            temp.push_back(i) ;
        }

        sort(temp.begin(), temp.end()) ;

        int n = temp.size() ; 
        double ans = 0 ; 

        if (n % 2 != 0)
        {
            ans = temp[n / 2] ; 
        }
        else
        {
            // if divided by '2' then we get wrong answer because 2 is INT
            // '2.00000' is the DOUBLE return type that we have to return
            ans = (temp[n / 2] + temp[(n / 2) - 1]) / 2.00000 ; 
        }
        return ans ; 
    }
};