class Solution {
public:
// BINARY SEARCH -> divide & conquer searching algorithm
// O(log n) - divides the array in half & compares the middle element till element found or size becomes 0 
// ONLY FOR SORTED ARRAYS 
// In each iteration, one half of array is discarded & other is processed

int binarySearchUtil(vector<int>&nums, int start, int end, int key)
{
    // base case -> condition to stop recursion
    // element not present in array
    if (start > end)
    {
        return -1 ; 
    }

    // element found 
    // solve one case 
    int middle = start + (end - start) / 2 ; 
    if (nums[middle] == key)
    {
        return middle ; 
    }

    // recursion
    // search in right half
    else if (nums[middle] < key)
    {
        return binarySearchUtil(nums, middle + 1, end, key) ; 
    }

    // search in left half
    else
    {
        return binarySearchUtil(nums, start, middle - 1, key) ;
    }
}
    int search(vector<int>& nums, int target) {
        // int start = 0 ; 
        // int end = nums.size() - 1 ; 

        // while (start <= end)
        // {
        //     // int mid = (start + end) / 2 ; 
        //     int mid = start + (end - start) / 2 ;

        //     // if element found return index
        //     if (nums[mid] == target)
        //     {
        //         return mid ; 
        //     }

        //     else if (nums[mid] > target)
        //     {
        //         // search in left half
        //         end = mid - 1 ; 
        //     }

        //     else
        //     {
        //         // search in right half
        //         start = mid + 1 ; 
        //     }
        // }
        // return -1 ; 

        int start = 0 ; 
        int end = nums.size() - 1 ; 
        return binarySearchUtil(nums, start, end, target) ; 
    }
};