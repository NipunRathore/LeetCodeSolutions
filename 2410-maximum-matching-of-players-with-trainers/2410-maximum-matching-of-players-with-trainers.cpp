class Solution {
public:
// GOAL -> to get maximum players trained, i.e., utilize the trainers 
// 'i'th player can match with the 'j'th trainer, if the player's ability is less than or equal to the trainer's training capacity.
// for this, we want every trainer to train a player who is having best ability given that trainer can train the player 
// We want {Capacity of Trainer - Ability of Player = 0 OR as less as possible}
// For this GREEDY Approach, we use Sorting
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end()) ; 
        sort(trainers.begin(), trainers.end()) ; 

        int i = 0 ; 
        int j = 0 ;
        int count = 0 ; 

        while (i < players.size() && j < trainers.size())
        {
            // condition to check if the trainer can train the player or not 
            // if player can match with trainer then move to next player, next trainer & increment count 
            if (players[i] <= trainers[j])
            {
                i ++ ; 
                j ++ ; 
                count ++ ; 
            }
            // if trainer cannot train i.e., 'i'th player can't match with 'j'th trainer -> then move to next trainer
            else
            {
                j ++ ; 
            }
        } 
        return count ; 
    }
};