class Solution {
public:
    bool solve(unordered_map<int, vector<int>> &mp, int src, int dest, vector<bool>& visited) 
    {
        if(src == dest)
        {
            return true ;
        }

        if(visited[src] == true)
        {
            return false ;
        }
        
        visited[src] = true ;

        for(auto node : mp[src]) 
        {
            if(solve(mp, node, dest, visited) == true)
            {
                return true ;
            }
        }
        return false ;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int> > mp ; 
        vector<bool> visited (n, false) ; 

        for (auto edge : edges)
        {
            int u = edge[0] ; 
            int v = edge[1] ; 

            mp[u].push_back(v) ; 
            mp[v].push_back(u) ; 
        }

        return solve(mp, source, destination, visited) ; 
    }
};