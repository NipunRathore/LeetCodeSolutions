class Graph {
public:
// Adjacency List
unordered_map<int, list<pair<int, int> > > adj ;
// Number of vertices 
int n ; 
    Graph(int n, vector<vector<int>>& edges) {
        this -> n = n ; 
        // create adjency list
        for (int i = 0 ; i < edges.size() ; i ++)
        {
            int u = edges[i][0] ; 
            int v = edges[i][1] ; 
            int wt = edges[i][2] ; 

            // Directed Graph 
            adj[u].push_back(make_pair(v, wt)) ; 
            // adj[v].push_back(make_pair(u, wt)) ; 
        }
    }
    
    void addEdge(vector<int> edge) {
        int u = edge[0] ; 
        int v = edge[1] ; 
        int wt = edge[2] ; 

        adj[u].push_back({v, wt}) ; 
        // adj[v].push_back({u, wt}) ; 
    }
    
    int shortestPath(int node1, int node2) {
        // Shortest Path using Dijkstra Algorithm
        vector<int> distance (n, INT_MAX) ; 

        // pair<distance, node> so that set sorted by distance values 
        set<pair<int, int> > st ; 

        // initialise both data structures with source node 
        distance[node1] = 0 ; 
        pair<int, int> p = make_pair(0, node1) ;
        st.insert(p) ;

        while (!st.empty())
        {
            // fetch top node
            auto top = *st.begin() ; 

            // remove top node 
            st.erase(st.begin()) ; 
            
            int nodeDist = top.first ; 
            int topNode = top.second ; 

            for (auto nbr : adj[topNode])
            {
                if (nodeDist + nbr.second < distance[nbr.first])
                {
                    // check no records present in set already for the given node 
                    auto record = st.find(make_pair(distance[nbr.first], nbr.first)) ;
                    // if record found 
                    if (record != st.end())
                    {
                        st.erase(record) ;
                    }
                    // update distance 
                    distance[nbr.first] = nodeDist + nbr.second ; 
                    
                    // store in set
                    st.insert(make_pair(distance[nbr.first], nbr.first)) ;
                }
            }
        } 
        if (distance[node2] == INT_MAX)
        {
            return -1 ; 
        }
        return distance[node2] ;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */