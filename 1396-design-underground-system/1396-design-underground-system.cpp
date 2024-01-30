class UndergroundSystem {
public:
    unordered_map<string, pair<double, int> > avg ; 
    unordered_map<int, pair<string, int> > info ; 
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        info[id] = {stationName, t} ; 
    }
    
    void checkOut(int id, string stationName, int t) {
        string name = info[id].first + " " + stationName ; 
        double interval = t - info[id].second ; 
        avg[name].first += interval ; 
        avg[name].second ++ ; 
    }
    
    double getAverageTime(string startStation, string endStation) {
        string name = startStation + " " + endStation ; 
        return avg[name].first / avg[name].second ;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */