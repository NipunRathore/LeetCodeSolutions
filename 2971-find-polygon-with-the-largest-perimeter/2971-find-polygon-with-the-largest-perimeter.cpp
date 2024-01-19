class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        // atleast 3 sides needed for a polygon
        if (nums.size() < 3)
        {
            return -1 ; 
        }

        // sorting to know if currentSum > currentSide 
        sort(begin(nums), end(nums)) ;

        long long sum = nums[0] + nums[1] ; 
        long long perimeter = 0 ;

        for (int i = 2 ; i < nums.size() ; i ++)
        {
            // if sum greater than current element then possible polygon
            // perimeter = sum + currentSide 
            if (sum > nums[i])
            {
                perimeter = sum + nums[i] ; 
            }
            // add current element to sum 
            sum += nums[i] ; 
        }
        // if perimeter 0, means didn't get updated 
        if (perimeter == 0)
        {
            return -1 ; 
        }
        return perimeter ; 
    }
};