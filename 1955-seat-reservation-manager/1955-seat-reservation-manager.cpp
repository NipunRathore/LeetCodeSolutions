class SeatManager {
public:
    // MinHeap Priority Queue
    priority_queue<int, vector<int>, greater<int> > seats ; 
    SeatManager(int n) {
        // initialise PQ with seat numbers from '1' to 'n'
        for (int i = 1 ; i <= n ; i ++)
        {
            seats.push(i) ; 
        }
    }
    
    // Reserve a Seat
    int reserve() {
        // check if there are available seats 
        if (!seats.empty())
        {
            // get smallest seat number - MIN HEAP Property
            int reservedSeat = seats.top() ; 
            // Remove reserved seat
            seats.pop() ; 
            // return seat number
            return reservedSeat ;
        }
        // else return -1 to indicate there are no available seats
        else
        {
            return -1 ; 
        }
    }
    
    // Unreserve a Seat
    void unreserve(int seatNumber) {
        // add unreserved seat back to priority queue 
        seats.push(seatNumber) ;
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */