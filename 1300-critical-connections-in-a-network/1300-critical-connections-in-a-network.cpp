class Solution {
public:
// Tarjan's Algorithm -> DFS based algorithm to check Bridge 
void dfsTarjanUtil (int node, int parent, int &timer, vector<int> &discovery, vector<int>& low, 
                    unordered_map<int, bool>& visited, unordered_map<int, list<int> >& adj, vector<vector<int> > &result)
{
    // mark visited
    visited[node] = true ; 
    // assign current timer as low and discovery times
    discovery[node] = timer ;
    low[node] = timer ; 
    // increment timer
    timer ++ ; 

    // fetch nbr from adj list 
    for (auto nbr : adj[node])
    {
        // if nbr is parent then ignore
        if (nbr == parent)
        {
            continue ; 
        }

        // if nbr is not visited & not parent 
        // then make dfs call with node = nbr & parent = node 
        if (!visited[nbr])
        {
            dfsTarjanUtil (nbr, node, timer, discovery, low, visited, adj, result) ;

            // when returning update low time of node as in case child node creates a back edge and it's low time gets updated
            // when low of child updated, we have another way to reach current node through its child node 
            // so need to update low of node
            low[node] = min (low[node], low[nbr])  ;

            // also when returning need to check if the edge is a bridge or not 
            if (low[nbr] > discovery[node])
            {
                // this condition means if this is the only way to reach nbr node then it is an edge 
                // if not the only way then kisi ke saath back edge bana ke low time of nbr would have been updated and would have reduced  
                vector<int> ans ; 
                ans.push_back(node) ; 
                ans.push_back(nbr) ; 

                result.push_back(ans) ; 
            }
        }
        else
        {
            // if nbr not parent but visited already
            // back edge -> reaching a visited node/nbr visited already means another path to reach the current node so need to update the low time 
            low[node] = min (low[node], discovery[nbr]) ; 
        }
    }
}

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        unordered_map<int, list<int> > adj ; 
        for (int i = 0 ; i < connections.size() ; i ++)
        {
            int u = connections[i][0] ; 
            int v = connections[i][1] ; 

            adj[u].push_back(v) ; 
            adj[v].push_back(u) ; 
        }

        int timer = 0 ; 
        // Discovery -> store the time at which you reach a node
        vector<int> discovery(n, -1) ; 
        // Low -> earliest possible time to reach a node 
        vector<int> low (n, -1) ; 
        // visited -> to track nodes that have been visited
        unordered_map<int, bool> visited ;
        // DFS based algorithm so no need of entire data structure to track parent, just maintain a variable 
        int parent = -1 ; 

        // stores bridge edge as vectors
        vector<vector<int> > result ; 

        for (int i = 0 ; i < n ; i ++)
        {
            if (!visited[i])
            {
                dfsTarjanUtil (i, parent, timer, discovery, low, visited, adj, result) ;
            }
        }

        return result ; 
    }
};