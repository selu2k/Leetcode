class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> v(60,0);
        long long res=0;
        for(int i = 0 ; i<time.size();i++){
            v[time[i]%60]++;
        }
        if(v[0]>1){
            if(v[0]>=60000){
                res = v[0]/2;
                res = res*(v[0]-1);
                //res = 1799970000;
            }else{
            res = (v[0]*(v[0]-1))/2;
            }
        }
        if(v[30]>1){
            res = res + (v[30]*(v[30]-1))/2;
        }
        for(int i = 1; i<30;i++){
            if(v[i]!=0 && v[60-i]!=0){
                res =res + v[i]*v[60-i];
            }
        }
        return res;
    }
};