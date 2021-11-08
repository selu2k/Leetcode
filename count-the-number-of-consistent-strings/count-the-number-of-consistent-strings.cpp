class Solution {
public:
    int countConsistentStrings(string all, vector<string>& words) {
        int count = 0;
        vector<int> v;
        v.assign(30,0);
        int n = words.size();
        int idx;
        for(char i : all){
            idx = (int)i - 97;
            v[idx]++;
        }
        for(int i = 0 ; i< n; i++){
            bool flag = true;
            for(char j : words[i]){
                if(v[(int)j-97]==0){
                    flag = false;
                    break;
                }
            }
            if(flag==true){count++;}
        }
        return count;
    }
};