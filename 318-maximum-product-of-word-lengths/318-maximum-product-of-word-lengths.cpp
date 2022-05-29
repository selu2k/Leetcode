class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int>v;
        for(auto i : words){
            int x = convert(i);
            v.push_back(x);
        }
        int ans=0;
        for(int i = 0 ; i< words.size();i++){
            for(int j = i+1 ; j< words.size(); j++){
                if( (v[i] & v[j])==0 ){
                    ans = max(ans,(int)(words[i].size()*words[j].size()));// (int) is needed 
                } // wihtout it overflow no function error

            }
        }
        return ans;
    }
    
    int convert(string s){
        int x=0; // converting strings into bits at the position according to ascii val
        for(auto i : s){
            x |= (1<<(i-'a'));
        }
        return x;
    }
};