class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string res="";
        for(int i = 0 ; i<n ; i++){
            if(address[i] == '.'){
                res = res +"[.]";
            }
            else{res = res+address[i];}
        }
        return res;
    }
};