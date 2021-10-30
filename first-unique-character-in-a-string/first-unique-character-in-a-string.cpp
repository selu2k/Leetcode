class Solution {
public:
    int firstUniqChar(string s) {
        int n =s.size();
        // string ss ="";
        // for(int i = 0 ; i< n ; i++){
        //     if(s.find(s[i],i+1) == string::npos && ss.find(s[i]) == string::npos){
        //         return i;
        //     }
        //     else{ss=ss+s[i];}
        // }
        // return -1;
        map<int,int> m;
        for(int i = 0 ; i<n ;i++){
            m[int(s[i])-97] = 0;
        }
        //m.assign(26,0);
        //m.insert(make_pair(s[0],1));
        for(int i = 0 ; i<n ;i++){
             m[int(s[i])-97]++;
            }
        int j=0;
        for(int i = 0 ; i<n ;i++){
            if(m[int(s[i])-97]==1){
                return i;
            }
        }
        return -1;
    }
};