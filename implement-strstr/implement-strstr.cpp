class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int n2 = haystack.size();
        if(n==0){return 0;}
        if(n2 == 0){return -1;}
        if(n>n2){return -1;}
        bool flag = true;
        for(int i = 0; i<n2-n+1; i++){
            if(haystack[i] == needle[0]){
                for(int j = 0;j<n;j++){
                    if(haystack[i+j]!=needle[j]){
                        break;
                    }
                    if(j == n-1 && haystack[i+j] == needle[j]){return i;}
            
                //if(flag == true){return i;}
            }
        }}
        return -1;
    }
};