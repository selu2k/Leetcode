class Solution {
public:
    int countSegments(string s) {
        int n = s.size();
        if(n==0){return 0;}
        int count = 0;
        bool flag=true;
        for(int i = 0 ; i<n;i++){
            if(s[i]!=' ' && flag == true){
                count++;
                flag=false;
            }
            else if(s[i]==' '){flag=true;}
        }
        return count;
    }
};