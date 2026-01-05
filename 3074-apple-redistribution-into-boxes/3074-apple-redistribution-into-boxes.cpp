class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApple = 0 ;
        for(int a : apple)
        {
            totalApple += a ;
        }

        sort(capacity.begin(), capacity.end());
        
        int totalCapacity = 0 ;
        for(int i = capacity.size() - 1 ; i >= 0 ; i --)
        {
            totalCapacity += capacity[i] ;
            if(totalCapacity >= totalApple) 
            {
                return capacity.size() - i ;
            }
        }
        return -1;
    }
};