class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1 ;
        unordered_map<char, char> mp2 ;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            //if the mapping doesnot exist
            if(!mp1[s[i]] && !mp2[t[i]])
            {
                mp1[s[i]] = t[i] ;
                mp2[t[i]] = s[i] ;
            }
            //if mapping already exist then check whether it is mapped to same character
            else if(mp1[s[i]] != t[i])
            {
                return false ;
            }
        }
        return true; 
    }
};