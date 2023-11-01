class Solution {
public:
// hour hand moves 15 degrees every 30 minutes 
// therefore, 0.5 degrees every minute

// minute hand = 180 degree in 30 minutes
// therefore, 6 degree every minute 
    double angleClock(int hour, int minutes) {
        int minuteHand = minutes * 6 ; 
        double hourHand = hour * 30 + minutes * 0.5 ;

        // find both angles, return the smaller one 
        return min (abs(hourHand - minuteHand), 360 - abs(hourHand - minuteHand)) ; 
    }
};
// T.C. = O(1)
// S.C. = O(1)