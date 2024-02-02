class Solution {
public:
    // recursive function to generate all possible combinations of sequential digits by appending digit to previous one 
    void solve(int i, int low, int high, int num, vector<int> &ans)
    {
        // if generated num in the specified range (greater than low & lesser than high) -> store 
        if (num >= low && num <= high)
        {
            ans.push_back(num) ; 
        }

        // BASE CASE
        // when number greater than range -> return 
        // OR if digit greater than 9 -> return 
        if (num > high || i > 9)
        {
            return ; 
        }

        // recursive call with updated parameters to explore next digit in sequence 
        solve(i + 1, low, high, (num * 10) + i, ans) ; 
    }

    // generate all sequential digits in the range [low, high]
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans ;

        // can place digit only greater than previously placed digit 
        // 1,2,3, -> next is 4 because one greater than 3 not 5 which is two greater than 3 
        // place 1-9 as first digit 
        for (int i = 1 ; i <= 9 ; i ++)
        {
            solve(i, low, high, 0, ans) ; 
        }

        // answer needed in sorted order 
        sort(ans.begin(), ans.end()) ; 
        return ans ; 
    }
};
// T.C. = O(1), although function is recursive but the maximum number of recursive calls is constant i.e., 9 & sorting takes (n*log(n)) howeverthe size of result vector is constant 
// S.C. = O(1), limited number of recursive calls in the function call stack therefore constant