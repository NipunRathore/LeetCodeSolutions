class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // {sortedWord, ListOfCorrespondingAnagrams}
        unordered_map<string,vector<string> > mp ;
        for (auto it : strs)
        {
            string word = it ;
            // after sorting all anagrams become same string so they are tore against the same key in map 
            sort(word.begin(), word.end()) ;
            mp[word].push_back(it) ;
        }

        vector<vector<string> > ans ;
        for (auto it : mp)
        {
            // map stores {sortedWord, ListOfCorrespondingAnagrams}
            // store all the ListOfCorrespondingAnagrams in the 'ans' array
            ans.push_back(it.second) ;
        }
        return ans ;
    }
};