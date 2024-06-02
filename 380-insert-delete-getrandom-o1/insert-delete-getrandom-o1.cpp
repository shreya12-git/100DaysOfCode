class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    std::unordered_map<int,int>mp;
    std::vector<int>values;
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()){
            return false;
        }
        values.push_back(val);
        mp[val]=values.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()){
            return false;
        }
        int last=values.back();
        int index=mp[val];
        values[index]=last;
        mp[last]=index;
        
        values.pop_back();
       mp.erase(val);

        return true;
    }
    
    int getRandom() {
        int randomIndex = rand() % values.size();
        return values[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */