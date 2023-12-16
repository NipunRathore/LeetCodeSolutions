class Solution {
public:
    bool isAnagram(string s, string t) {
        // Anagram is formed by rearranging letters
        // so, if we sort both the strings we must get same string
        sort(s.begin(), s.end()) ;
        sort(t.begin(), t.end()) ;
        
        return s == t ;
    }
};