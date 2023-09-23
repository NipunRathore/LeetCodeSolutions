class Solution {
private:
public:
    // CUSTOM COMPARATOR FUNCTION -> to sort wrtt frequency 
    static bool comp (pair<char, int> &a, pair<char, int> &b)
    {
        return a.second > b.second ; 
    }

    string frequencySort(string s) {
        vector<pair<char, int> > mp (256) ;
        for (auto i : s)
        {
            mp[i].first = i ;
            mp[i].second ++ ;
        }

        // sorting based on frequency
        sort(mp.begin(), mp.end(), comp) ;

        string ans = "" ; 

        for (auto i : mp)
        {
            char ch = i.first ; 
            int freq = i.second ;

            while (freq --)
            {
                ans += ch ;
            }
        }

        return ans ; 
    }
};