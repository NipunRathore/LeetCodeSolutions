class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> st ; 

        for (auto path : paths)
        {
            st.insert(path[0]) ; 
        }

        for (auto path : paths)
        {
            if (st.find(path[1]) == st.end())
            {
                return path[1] ;
            }
        }
        return "" ; 
    }
};

// class Solution {
// public:
//     string destCity(vector<vector<string>>& paths) {
        
//         unordered_map<string, int> adj ; 
//         for (int i = 0 ; i < paths.size() ; i ++)
//         {
//             for (auto it : paths[i])
//             {
//                 adj[it] ++ ; 
//             }
//         }

//         for (int i = 0 ; i < paths.size() ; i ++)
//         {
//             if (adj[paths[i][1]] == 1)
//             {
//                 return paths[i][1] ;
//             }
//         }
//         return "" ; 
//     }
// };