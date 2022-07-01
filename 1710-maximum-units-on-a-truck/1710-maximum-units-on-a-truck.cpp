class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truck) {
        auto cmp = [](vector<int> &p1,vector<int> &p2){
            return p1[1]>p2[1];
        };
        sort(box.begin(),box.end(),cmp);
        int count=0;
        for(auto unit : box){
            int temp = min(unit[0],truck);
            count += temp*unit[1];
            truck -= temp;
            if(truck == 0) return count;
        }
        return count;
    }
};