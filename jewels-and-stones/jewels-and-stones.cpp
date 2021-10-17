class Solution {
public:
    int numJewelsInStones(string jew, string st) {
        int j = jew.size();
        int s = st.size();
        sort(st.begin(),st.end());
        int count = 0;
        for(int i = 0 ; i<j;i++){
            size_t found = st.find(jew[i]);
            if (found != string::npos){
                count++;
                int j = found;
                while(j<s){
                    if(st[j+1]==jew[i]){
                    count++;
                        j++;
                    }
                    else{break;}
                }
            }
        }
        return count;
    }
};