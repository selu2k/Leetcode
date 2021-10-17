class Solution {
public:
    int tribonacci(int n) {
        // if(n == 0){return 0;}
        // else if(n==1){return 1;}
        // else if(n==2){return 1;}
        // else {return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        // }
        vector<int> v(n+1);
        if(n==0){return 0;}
        else if(n==1){return 1;}
        else if(n==2){return 1;}
        v[0]=0;
        v[1]=1;
        v[2]=1;
        for(int i =3; i<=n;i++){
            v[i] = (v[i-1]+v[i-2]+v[i-3]);
        }
        return v[n];
    }
};