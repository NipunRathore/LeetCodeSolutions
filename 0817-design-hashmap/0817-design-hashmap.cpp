class MyHashMap {
public:
    vector<pair<int, int> > mp ; 
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        // if already present then update value
        for (auto& i : mp)
        {
            if (i.first == key)
            {
                i.second = value ; 
                return ; 
            }
        }
        // else create key, value pair entry 
        mp.push_back({key, value}) ;
    }
    
    int get(int key) {
        // if pressent then retrieve
        for (auto i : mp)
        {
            if (i.first == key)
            {
                return i.second ; 
            }
        }
        // else return -1 
        return -1 ; 
    }
    
    void remove(int key) {
        // use iterators or use int and then use erase(mp.begin() + i)
        for (auto it = mp.begin() ; it != mp.end() ; it ++)
        {
            if (it -> first == key)
            {
                mp.erase(it) ; 
                return ; 
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */