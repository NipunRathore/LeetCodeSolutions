class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // we have to add 1 to the last element and also add 1 to previous elements if the sum of their next becomes greater than 9
        // therefore addition of 1 to last can also be considered addition of carry
        
        int carry = 1 ; 
        // addition is done from the end 
        for (int i = digits.size() - 1 ; i >= 0 ; i--)
        {
            digits[i] += carry ; 

            if (digits[i]> 9)
            {
                // 1 is being added therefore only we can get in 2 digits is 10
                digits[i] = 0 ;
                carry = 1; 
            }
            else
            {
                carry = 0 ; 
            }
        }
        // for edge cases, if after the last iteration carry becomes 1 we need to insert it to the beginning 
        if (carry == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits ; 
    }
};