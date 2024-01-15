class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int> > ans ;
        // map of {player, {wins, losses}} of players 
        unordered_map<int, pair<int, int> > mp ; 
        for (auto match : matches)
        {
            // extract the winner and loser of the current match 
            int winner = match[0] ; 
            int loser = match[1] ;
            // increment win count of the winner  
            mp[winner].first ++ ; 
            // increment loss count of the loser 
            mp[loser].second ++ ; 
        }
        
        // arrays to store players with 0 & 1 losses respectively 
        vector<int> noLoss ; 
        vector<int> oneLoss ; 
        // checking losses of each player & storing in respective arrays 
        for (auto it : mp)
        {
            // if a player has lost no matches
            if (it.second.second == 0)
            {
                noLoss.push_back(it.first) ; 
            }

            // if a player has lost only 1 match
            if (it.second.second == 1)
            {
                oneLoss.push_back(it.first) ; 
            }
        }
        
        // answer needed in increasing order therefore sort & store 
        sort(noLoss.begin(), noLoss.end()) ; 
        sort(begin(oneLoss), end(oneLoss)) ; 

        // store the arrays in the answer array & return 
        ans.push_back(noLoss) ; 
        ans.push_back(oneLoss) ; 

        return ans ; 
    }
};