class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        // sort array so elements arranged in a non decreasing fashion
        sort(arr.begin(), arr.end()) ; 
        
        // make first element (0th index) equal to 1
        arr[0] = 1 ; 
        for (int i = 1 ; i < arr.size() ; i ++)
        {
            // check if absolute difference between element & previous element greater than 1 or not
            if (arr[i] > arr[i - 1] + 1)
            {
                // if yes, add one to previous element value & store at it 
                // so that difference condition satisfied and we have maximised the element also 
                arr[i] = arr[i - 1] + 1 ; 
            }
        }
        // return last element 
        return arr.back() ; 
    }
};
// T.C. = O (N*logN)
// S.C. = O (1)

// class Solution {
// public:
//     int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
//         sort(arr.begin(), arr.end()) ; 
//         int curr = 0 ; 

//         for (int i = 0 ; i < arr.size() ; i ++)
//         {
//             if (arr[i] > curr)
//             {
//                 curr ++ ; 
//             }
//         }
//         return curr ; 
//     }
// };