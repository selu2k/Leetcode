class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if(n==1) return true;
        //sorting counting //store powers of 2 and match
        vector<string> v;
        for(int i = 0 ; i<=30 ; i++ ){
            int temp = pow(2,i); // keeping this out of to_string
            v.push_back(to_string(temp));
        }
        for(int i=0;i<31;i++){
            sort(v[i].begin(),v[i].end());
        }
        string s = to_string(n);
        sort(s.begin(), s.end() );
        for(int i=0;i<31 ;i++){
            if(v[i] == s) return true;
        }
        return false;
    }
};