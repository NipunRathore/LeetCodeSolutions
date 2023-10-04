class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int x = intervals[0][0];
        int y = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++)
        {
            if(y >= intervals[i][0])
            {
                y = max(y, intervals[i][1]);
            }
            else
            {
                vector<int> z = {x, y};
                ans.push_back(z);
                x = intervals[i][0];
                y = intervals[i][1];
            }
        }    
        vector<int> z = {x, y};
        ans.push_back(z);
        return ans;
    }
};
