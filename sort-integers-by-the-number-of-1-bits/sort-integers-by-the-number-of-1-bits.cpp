class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](const int a,const int b){
            bitset<32>n(a);
            bitset<32>m(b);
            int x = n.count();
            int y = m.count();
            if(x == y){return a<b;}
            return x < y ;
        });
        return arr;
    }
};