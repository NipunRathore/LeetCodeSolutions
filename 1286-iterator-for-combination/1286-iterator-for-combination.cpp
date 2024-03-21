class CombinationIterator {
public:
    vector<string> res ; 
    int pos ; 

    void solve(int index, string str, int len, vector<string> &res, string output)
    {
        if (output.length() == len)
        {
            res.push_back(output) ; 
            return ; 
        }

        for (int i = index ; i < str.length() ; i ++)
        {
            output.push_back(str[i]) ; 
            solve(i + 1, str, len, res, output) ; 
            output.pop_back() ; 
        }
    }

    CombinationIterator(string characters, int combinationLength) {
        int index = 0 ; 
        pos = 0 ; 
        solve(index, characters, combinationLength, res, "") ; 
    }
    
    string next() {
        return res[pos ++] ; 
    }
    
    bool hasNext() {
        return pos != res.size() ; 
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */