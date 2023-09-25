class Solution {
public:
// using DIJKSTRA'S ALGORITHM
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int, list<pair<int, double> > > adj ; 
        for (int i = 0 ; i < edges.size() ; i ++)
        {
            int u = edges[i][0] ; 
            int v = edges[i][1] ; 
            double wt = succProb[i] ; 

            // undirected graph
            adj[u].push_back({v, wt}) ; 
            adj[v].push_back({u, wt}) ; 
        }

        // create distance array -> to store the maximum probabilities
        // MaxHeap -> to find the maximum distance node
        // pair<probability, node> 
        priority_queue<pair<double, int> > pq ;
        vector<double> distance (n, INT_MIN) ;

        // initialize the data strcutures with source node
        distance[start_node] = 1 ; 
        pq.push({1.0, start_node}) ;  

        while (!pq.empty())
        {
            auto top = pq.top() ; 
            pq.pop() ;

            double nodeDistance = top.first ;
            int topNode = top.second ; 

            for (auto nbr : adj[topNode])
            {
                int nbrNode = nbr.first ;
                double edgeWt = nbr.second ;

                // update distance if greater probability found 
                if (nodeDistance * edgeWt > distance[nbrNode])
                {
                    distance[nbrNode] = nodeDistance * edgeWt ; 

                    // after relaxation store the updated record in the priority queue
                    pq.push({distance[nbrNode], nbrNode}) ;
                }
            }
        }
        if (distance[end_node] == INT_MIN)
        {
            return 0.00000 ; 
        }
        return distance[end_node] ; 
    }
};
// T.C. = O(ElogV)
// S.C. = O(E + V)