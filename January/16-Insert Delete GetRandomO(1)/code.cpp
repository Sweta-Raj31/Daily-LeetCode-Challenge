
class RandomizedSet {
public:
    unordered_set<int> memo;
    bool isPresent(int val) {
        if (memo.find(val) != memo.end()) // condition for checking val is find
                                          // before end of the set
            return true;
        return false;
    }
    RandomizedSet() {}

    bool insert(int val) {
        if (isPresent(val))
            return false;
        memo.insert(val);
        return true;
    }

    bool remove(int val) {
        if (isPresent(val)) {
            memo.erase(val);
            return true;
        }
        return false;
    }

    int getRandom() {
        // sequence of getting random number rand() % N
        int position = rand() % (memo.size());
        return *next(memo.begin(), position);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
