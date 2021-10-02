class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        // for(int i = 0 ; i<n; i++){
        //     for(int j = 0 ; j<)
        // }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0 ; i<n ; i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t[n];
    }
};