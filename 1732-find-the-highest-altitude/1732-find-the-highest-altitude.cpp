class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt ; 
        alt.push_back(0) ; 

        for (int i = 0 ; i < gain.size() ; i ++)
        {
            alt.push_back(alt[i] + gain[i]) ; 
        }

        sort(alt.begin(), alt.end()) ; 
        return alt.back() ; 
    }
};