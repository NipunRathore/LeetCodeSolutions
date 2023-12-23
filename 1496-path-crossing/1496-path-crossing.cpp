class Solution {
public:
// Start at Origin -> {x, y} = {0, 0}
// Move North {y ++} ,South {y --}, East {x ++}, West {x --} 
// At the end of every movement/iteration check if the current position present in set or not 
// if YES -> return TRUE 
// if NOT -> insert current position in set 
    bool isPathCrossing(string path) {
        if ((path[0] == 'N' && path[1] == 'S') || (path[0] == 'S' && path[1] == 'N') || (path[0] == 'W' && path[1] == 'E') || (path[0] == 'E' && path[1] == 'W'))
        {
            return true ; 
        }

        set<pair<int, int> > st ; 
        st.insert({0, 0}) ;

        int x = 0 ; 
        int y = 0 ;  

        if (path[0] == 'N')
        {
            y ++ ; 
        }

        if (path[0] == 'S')
        {
            y -- ; 
        }

        if (path[0] == 'E')
        {
            x ++ ; 
        }

        if (path[0] == 'W')
        {
            x -- ; 
        }
        st.insert({x, y}) ; 

        for (int i = 1 ; i < path.length() ; i ++)
        {
            if (path[i] == 'N')
            {
                y ++ ; 
            }

            else if (path[i] == 'S')
            {
                y -- ; 
            }

            else if (path[i] == 'E')
            {
                x ++ ; 
            }

            else if (path[i] == 'W')
            {
                x -- ; 
            }

            if (st.find({x, y}) != st.end())
            {
                return true ; 
            }
            else
            {
                st.insert({x, y}) ; 
            }
        }
        return false ; 
    }
};
// T.C. = O(N)
// S.C. = O(N)