class MyHashMap {
public:
    vector<vector<pair<int, int>>> map;
    const int size = 10000;
    MyHashMap() {
        map.resize(size);
    }
    
    void put(int key, int value) {
        int hashval = key%size;
        vector<pair<int,int>> &pairWithHashVal = map[hashval];
        for (auto & val : pairWithHashVal) {
            if (val.first == key) {
                val.second = value;
                return;
            }
        }
        pairWithHashVal.push_back(make_pair(key, value));
    }
    
    int get(int key) {
        int hashval = key%size;
        vector<pair<int,int>> &pairWithHashVal = map[hashval];
        for (auto & val : pairWithHashVal) {
            if (val.first == key) {
                return val.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int hashval = key%size;
        vector<pair<int,int>> &pairWithHashVal = map[hashval];
        for(auto i=pairWithHashVal.begin(); i!= pairWithHashVal.end(); i++)
        {
            if(i->first==key) { pairWithHashVal.erase(i); return; }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */