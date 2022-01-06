class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>> v;
        //int i = 0 ; i<trips.size() ; i++
        for(auto t : trips){
            v.push_back({t[1], t[0]});
            v.push_back({t[2], -t[0]});
        }
        
        sort(v.begin(),v.end());
        int filled = 0;
        
        for(int i = 0 ; i<v.size();i++){
            filled += v[i].second;
            if(filled > capacity){
                return false;
            }
        }
        return true;
    }
};