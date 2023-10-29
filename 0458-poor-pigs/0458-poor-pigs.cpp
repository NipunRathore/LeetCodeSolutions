class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        return ceil(log2(buckets) / log2(int(minutesToTest / minutesToDie) + 1)) ; 
    }
};
// T.C. = O(1)
// S.C. = O(1)