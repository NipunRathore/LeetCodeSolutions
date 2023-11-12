class ATM {
public:
vector<long> notes ; 
    ATM() {
        // intitially 0 notes of all denominations 
        for (int i = 0 ; i < 5 ; i ++)
        {
            notes.push_back(0) ; 
        }
    }
    
    void deposit(vector<int> banknotesCount) {
        // deposit the number of notes of each denomination 
        for (int i = 0 ; i < 5 ; i ++)
        {
            notes[i] += banknotesCount[i] ; 
        }
    }
    
    vector<int> withdraw(int amount) {
        if (amount % 10 != 0)
        {
            return {-1} ; 
        }

        int _500notes = 0 ;
        int _200notes = 0 ;
        int _100notes = 0 ;
        int _50notes = 0 ;
        int _20notes = 0 ;

        // if there is at least 1 '500 rupee' note present 
        // we will check for it
        if(notes[4] > 0)
        {
            
            // check whether we can use all the 500 rupee notes
            if(notes[4] * (long)500 <= amount)
            {
                _500notes = notes[4] ;
                amount -= notes[4] * 500 ;
            }
            // else How many we use at maximum
            else
            {
                _500notes = amount/500;
                amount %= 500;
            }          
        }

        // similarly for 200 ,100 ,50 ,20 rupee notes too
        if(notes[3] > 0)
        {
            if(notes[3] * (long)200 <= amount)
            {
                _200notes = notes[3] ;
                amount -= notes[3] * 200 ;
            }
            else
            {
                _200notes = amount/200 ;
                amount %= 200 ;
            }
        }

        if(notes[2] > 0)
        {
            
            if(notes[2] * (long)100 <= amount)
            {
                _100notes = notes[2] ;
                amount -= notes[2] * 100 ;
            }
            else
            {
                _100notes = amount/100 ;
                amount %= 100 ;
            }
        }

        if(notes[1] > 0)
        {
            if(notes[1] * (long)50 <= amount)
            {
                _50notes = notes[1] ;
                amount -= notes[1] * 50 ;
            }
            else
            {
                _50notes = amount / 50 ;
                amount %= 50 ;
            }
        }

        if(notes[0] > 0)
        {
            if(notes[0] * (long)20 <= amount)
            {
                _20notes = notes[0] ;
                amount -= notes[0] * 20 ;
            }
            else
            {
                _20notes = amount / 20 ;
                amount %= 20 ;
            }
        }
        
        // if amount has reduced to 0 we can return the number of each denomiantion notes 
        if(amount == 0)
        {
            notes[0] -= _20notes ;
            notes[1] -= _50notes ;
            notes[2] -= _100notes ;
            notes[3] -= _200notes ;
            notes[4] -= _500notes ;
            // notes is a long type vector so cant return that 
            // return notes ; 
            return {_20notes , _50notes, _100notes , _200notes , _500notes};
        }

        // else we cant take out money from ATM
        return {-1};
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */