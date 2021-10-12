class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // unordered_map<int,int> m;
        // int n = score.size();
        // for(int i = 0 ; i<n;i++){
        //     m[score[i]] = i ;
        // }
        // map<int,int> ord(m.begin(),m.end());
        // vector<string> res(n);
        // int i =0;
        // for(auto it = ord.begin(); it != ord.end(); ++it){
        //     res[it->second] = to_string(n-i);
        //     i++;
        //     if(n-i == 3){break;}
        // }
        // res[ord.end()-2->second]="Bronze Medal";
        // res[ord.end()-1->second]="Silver Medal";
        // res[ord.end()->second]="Gold Medal";
        // return res;
            vector<pair<int,int>> helper;
    
    for(int i = 0; i<score.size(); i++){
        helper.push_back({score[i],i});
    }
    sort(helper.rbegin(),helper.rend());
    vector<string> answer(score.size());
    
    for(int i = 0; i<helper.size(); i++){
        if(i==0){
            answer[helper[i].second] = "Gold Medal";
        }
        else if(i==1){
            answer[helper[i].second] = "Silver Medal";
        }
        else if(i==2){
            answer[helper[i].second] = "Bronze Medal";
        }else{
            answer[helper[i].second] = to_string(i+1);
        }
    }
    return answer;
    }
};