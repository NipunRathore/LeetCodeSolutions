class RandomizedSet {
public:
    // to store values/elements
    vector<int> values ; 
    // to check if element present or not 
    unordered_map<int, int> mp ; 
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        // if element present, return false
        if (mp.find(val) != mp.end())
        {
            return false ; 
        }
        // add element to vector & store in map as well  
        mp[val] = 1 ; 
        values.push_back(val) ; 
        return true ; 
    }
    
    bool remove(int val) {
        // if element not present, return false 
        if (mp.find(val) == mp.end())
        {
            return false ; 
        }
        // remove value from map 
        mp.erase(val) ; 
        // remove value from array
        values.erase(std::remove(values.begin(), values.end(), val), values.end()) ; 
        return true ;
    }
    
    int getRandom() {
        // generate a random index & return that element
        int randomIndex = rand() ; 
        int index = randomIndex % mp.size() ; 
        int val = values[index] ;
        return val ; 
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */