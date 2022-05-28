class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>map;
        for(string i : senders) map[i] = 0;
        int n = messages.size();
        for(int i=0 ; i<n ; i++){
            int len = 0;
            for(int j=0; j<messages[i].size();j++){
                if(messages[i][j]==' ') len++;
            }
            len++;
            map[senders[i]] = map[senders[i]] + len;
        }
        //vector<string> v;
        int m = 0;
        string ans="";
        for(auto i : map){
            if(i.second > m){
                //v.clear();
                //v.push_back(i.first);
                ans = i.first;
                m = i.second;
            }
            else if(i.second == m) {
                //v.push_back(i.first);
                if( ans.compare(i.first) < 0  ) ans = i.first;
            }
        }
//         int vn = v.size();
//         if(vn>1){
//             string ans = v[0];
//             for(int i =1 ; i <vn ; i++){
//                 if( ans.compare(v[i]) < 0  ) ans = v[i];
//             }
//             return ans;
            
//         }
        return ans;
        //return "hello";
        
    }

};