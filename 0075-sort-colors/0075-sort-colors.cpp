class Solution {
public:
// bubble sort -> Ith round -> Ith largest element -> at N-Ith index 
void bubbleSortUtil(vector<int> &arr, int size)
{
    // base case 
    if (size == 0 || size == 1)
    {
        return ;
    }

    // solve one case
    // place largest position at last index
    for (int i = 0 ; i < size - 1 ; i ++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]) ;
        }
    }

    // recursion 
    bubbleSortUtil(arr, size - 1) ;
}
    void sortColors(vector<int>& nums) {
        // solution - 1
        // sort(nums.begin(), nums.end()) ;

        // solution - 2 
        // bubble sort using recursion 
        bubbleSortUtil(nums, nums.size()) ;
    }
};