class Solution {
public:
    int v[26];
    int parent(int x){
        if(v[x] == x ) return x;
        else return (v[x] = parent(v[x]));
    }
    
    bool equationsPossible(vector<string>& eq) {
        int n = eq.size();
        // bool flag; // 107/181 doesn't check transition property;
        // vector<string> mp1;
        // vector<string> mp2;
        // for(int i = 0 ; i< n ; i++){
        //     if(eq[i][0]==eq[i][3] && eq[i][1]=='!'){
        //         return false;
        //     }
        //     if(eq[i][1]=='!'){
        //         string s;
        //         if(eq[i][0] > eq[i][3]){
        //             s = eq[i][3] + eq[i][0];
        //         }
        //         else s = eq[i][0]+eq[i][3];
        //         if(find(mp1.begin(),mp1.end(),s)!=mp1.end()){
        //             return false;
        //         }else{
        //             mp2.push_back(s);
        //         }
        //     }
        //     else{
        //         string s;
        //         if(eq[i][0] > eq[i][3]){
        //             s = eq[i][3] + eq[i][0];
        //         }
        //         else s = eq[i][0]+eq[i][3];
        //         if(find(mp2.begin(),mp2.end(),s)!=mp2.end()){
        //             return false;
        //         }else{
        //             mp1.push_back(s);
        //         }
        //     }
        // }
        
        
        // assign parents to each character
        // if '!' and parents are same then return false
        
        //vector<int> v(26,-1); // 166/181 cause we are not updating values;
//         int v[26];
//         for(int i = 0 ; i<26 ; i++){
//             v[i] = i;  // making each character parent of itself
//         }
//         sort(eq.begin(),eq.end()); // after sorting 167
//         for(auto i : eq){
//             if(i[1] == '='){
//                 if(i[3] > i[0]){
//                     v[i[3]-'a'] = v[i[0]-'a'];
//                 }
//                 else v[i[0]-'a'] = v[i[3]-'a'];
//             }
            
//         }
        
//         for(auto i : eq){
//             if(i[1] =='!'){
//                 if(v[i[0]-'a'] == v[i[3]-'a']) return false;
//             }
//         }
        
        
        // int v[26];
        for(int i = 0 ; i<26 ; i++){
            v[i] = i;  // making each character parent of itself
        }
        for(auto i : eq){
            if(i[1] == '='){
                v[parent(i[0]-'a')] = parent(i[3]-'a');
            }
            
        }
        
        for(auto i : eq){
            if(i[1] =='!'){
                if(parent(i[0]-'a') == parent(i[3]-'a')) return false;
            }
        }
        
        
        return true;
    }
};