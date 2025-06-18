class SmallestInfiniteSet {
    set<int> s;
    int current;

public:
    SmallestInfiniteSet() {
        current = 1;
    }
    
    int popSmallest() {
        if (!s.empty()) {
            int val = *s.begin();
            s.erase(s.begin());
            return val;
        }
        return current++;
    }
    
    void addBack(int num) {
        if (num < current)
            s.insert(num);
    }
};
