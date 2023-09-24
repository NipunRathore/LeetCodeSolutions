class Solution {
public:
// TOPOLOGICAL SORT using BFS Kahn's Algorithm
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int v = numCourses ; 
        int e = prerequisites.size() ; 
        
        // prepare Adjacency List
        unordered_map<int, list<int> > adj ;
        for (int i = 0 ; i < e ; i ++)
        {
        //  prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.
        // therefore edge from b to a i.e., v to u 

            int u = prerequisites[i][0] ;
            int v = prerequisites[i][1] ; 

            adj[v].push_back(u) ; 
        }

        // prepare inDegree array
        // INDEGREE -> number of incoming edges / incident edges
        // for edge from u to v, inDegree of v increases
        // so inDegree of neighbour of each vertex is to be increased
        vector<int> inDegree (v, 0) ; 
        for (auto i : adj)
        {
            for (auto j : i.second)
            {
                inDegree[j] ++ ;
            }
        }

        queue<int> q ; 
        // store 0 inDegree vertices in queue 
        for (int i = 0 ; i < v ; i ++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i) ;
            }
        }
 
        int cnt = 0 ; 
        while (!q.empty())
        {
            // front, pop & store
            int front = q.front() ; 
            q.pop() ; 

            cnt ++ ;

            for (auto nbr : adj[front])
            {
                // on removing frontNode from graph, inDegree of its neighbours reduces by 1
                inDegree[nbr] -- ; 
                // if inDegree of neighbour becomes 0, then push into queue
                if (inDegree[nbr] == 0)
                {
                    q.push(nbr) ;
                }
            }
        }

        // if a valid topological sort -> return true
        // valid topological sort -> number of nodes in the linear ordering is equal to 'v'
        return cnt == v ;
    }
};
// no visited array used here as insertions in queue done based only on InDegree status 
// T.C. = O(N + E)
// S.C. = O(N + E)