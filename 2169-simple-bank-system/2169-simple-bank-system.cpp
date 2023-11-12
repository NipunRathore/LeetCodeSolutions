class Bank {
public:
// long long because balance array of type long long 
unordered_map<int, long long> mp ; 
    Bank(vector<long long>& balance) {
        for (int i = 0 ; i < balance.size() ; i ++)
        {
            // given i+1th account has balance[i]
            mp[i + 1] = balance[i] ; 
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
        // if account1 is present in Map AND account2 is present in Map AND Account1 has enough money
        if (mp.find(account1) != mp.end() && mp.find(account2) != mp.end() && mp[account1] >= money)
        {
            // withdraw from account1
            mp[account1] -= money ; 
            // deposit in account2
            mp[account2] += money ;
            return true ;
        }
        return false ; 
    }
    
    bool deposit(int account, long long money) {
        // if account present in Map then add money 
        if (mp.find(account) != mp.end())
        {
            mp[account] += money ; 
            return true ; 
        }
        return false ;
    }
    
    bool withdraw(int account, long long money) {
        // if account present in Map AND has enough money then withdraw 
        if (mp.find(account) != mp.end() && mp[account] >= money)
        {
            mp[account] -= money ; 
            return true ; 
        }
        return false ; 
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */