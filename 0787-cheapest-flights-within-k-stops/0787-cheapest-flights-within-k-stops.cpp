class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dest, int k) {
        if (src == dest)
        {
            return 0 ; 
        }

        unordered_map<int, vector<pair<int, int> > > adj ; 

        for (auto flight : flights)
        {
            adj[flight[0]].push_back({flight[1], flight[2]}) ; 
        }
        
        vector<int> minCost(n, INT_MAX) ; 
        minCost[src] = 0 ; 
        queue<pair<int, int> > q ; 
        q.push({src, 0}) ; 

        int stops = 0 ; 

        while (!q.empty() && stops <= k)
        {
            int size = q.size() ; 

            while (size --)
            {
                auto[city, cost] = q.front() ; 
                q.pop() ; 

                for (auto [nbr, price] : adj[city])
                {
                    if (price + cost < minCost[nbr])
                    {
                        minCost[nbr] = price + cost ; 
                        q.push({nbr, minCost[nbr]}) ; 
                    }
                }
            }
            stops ++ ; 
        }
        if (minCost[dest] == INT_MAX)
        {
            return -1 ; 
        }
        return minCost[dest] ; 
    }
};