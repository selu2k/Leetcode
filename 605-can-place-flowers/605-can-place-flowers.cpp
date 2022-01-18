class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int m = f.size();
        if(n==0){return true;}
        if(m==1){
            if(f[0]==0){if(n==1){return true;}else{return false;}}
            else{return false;}
        }
        for(int i = 0 ; i<m-1 ; i++){
            if(f[i] == 1){
                i++;
                if(i>m-1){break;}
            }
            else if(f[i+1]!= 1) {
                n--;
                f[i] = 1;
                i++;
                if(n==0){break;}
                if(i>m-1){break;}
            }
        }
        if(f[m-1]==0 && f[m-2]==0 && n>0){n--;}
        if(n==0){return true;}
        return false;
    }
};