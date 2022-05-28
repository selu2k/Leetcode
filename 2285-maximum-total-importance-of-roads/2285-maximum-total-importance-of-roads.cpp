bool comparee(pair<int,int> a, pair<int,int> b)
    {
        return a.first>b.first;
    }
class Solution {
public:
    
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int,int> map;
        for(int i=0;i<roads.size();i++)
        {
            map[roads[i][0]]++;
            map[roads[i][1]]++;
        }
    
        vector<pair<int,int>> v;
    
        for(auto i: map)
            v.push_back({i.second,i.first});
    
        sort(v.begin(),v.end(),comparee);
        long long ans=0;
    
        for(int i=0;i<v.size();i++)
        {
            v[i].second=n;
            n--;
            ans+=(long long)v[i].first*(long long)v[i].second;
        }
    
        return ans;
    
    }
    
};