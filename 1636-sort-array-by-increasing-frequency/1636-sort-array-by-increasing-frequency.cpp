class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // store array elements in map 
        unordered_map<int, int> mp ;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            // if freq of two elements same we want to consider smaller element first therefore need to use negative sign 
            // 2 < 5
            // -2 > -5
            mp[-nums[i]] ++ ;
        }

        // create a Min-Heap Priority Queue & insert {freq, element} pairs in it
        // so that element at top of min freq 
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq ;
        for (auto it : mp)
        {
            pq.push({it.second, it.first}) ; 
        }
        
        // fetch elements from pq & store in resultant array 
        vector<int> ans ;
        while(!pq.empty())
        {
            int freq = pq.top().first ;
            int element = pq.top().second ;
            for(int i = 0 ; i < freq ; i ++)
            {
                // using -ve sign to neutralise the -ve used earlier
                ans.push_back(-element) ;
            }
            pq.pop() ;
        }
        
        return ans;
    }
};