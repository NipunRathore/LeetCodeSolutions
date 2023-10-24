class MyCalendarThree {
public:
    map<int, int> mp ; 
    int maxCnt = 0 ; 
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        mp[startTime] ++ ; 
        mp[endTime] -- ;

        int cnt = 0 ; 

        for (auto i : mp)
        {
            cnt += i.second ; 
            maxCnt = max(maxCnt, cnt) ; 
        }
        return maxCnt ; 
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */