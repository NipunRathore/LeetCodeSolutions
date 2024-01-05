class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size() ;  
        vector<long long int> inDegree (n, 0) ;

        for (int i = 0 ; i < n ; i ++)
        {
            // for each inDegree, instead of adding '1' here we add the node value 'i'
            inDegree[edges[i]] += i ; 
        }
        // max_element returns a pointer/iterator to the maximum element in the container 
        // *max_element uses dereference pointer to access the maximum value
        return max_element(inDegree.begin(), inDegree.end()) - inDegree.begin() ; 
    }
};