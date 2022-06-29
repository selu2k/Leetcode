class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        //tricky ques
        auto comp = [](vector<int>& p1, vector<int>& p2)// describing the compare function
                    { return p1[0] > p2[0] || (p1[0] == p2[0] && p1[1] < p2[1]); };
        vector<vector<int>> ans;
        sort(people.begin(),people.end(), comp);
        for(auto &i: people){
            ans.insert(ans.begin()+i[1],i); //imp insert
        }
        return ans;
    }
};