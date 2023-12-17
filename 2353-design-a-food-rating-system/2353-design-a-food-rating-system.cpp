class FoodRatings {
private:
    unordered_map<string, set<pair<int, string> > > cuisinesToRating ;
    unordered_map<string, int> foodToRating ;
    unordered_map<string, string> foodToCuisine ;
    
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0 ; i < foods.size() ; i ++)
        {
            foodToRating[foods[i]] = -ratings[i] ;
            foodToCuisine[foods[i]] = cuisines[i] ;
            cuisinesToRating[cuisines[i]].insert({-ratings[i], foods[i]}) ; 
        }
    }
    
    void changeRating(string food, int newRating) {
        cuisinesToRating[foodToCuisine[food]].erase({foodToRating[food], food}) ;
        cuisinesToRating[foodToCuisine[food]].insert({-newRating, food}) ;
        foodToRating[food] = -newRating ;
    }
    
    string highestRated(string cuisine) {
        return cuisinesToRating[cuisine].begin() -> second ; 
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */