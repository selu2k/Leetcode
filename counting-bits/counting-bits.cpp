class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0; i<=n ; i++){
            string binary = bitset<64>(i).to_string();
            int count=0;
            for(int j = 0;j<binary.size();j++){
                if(binary[j] == '1'){count++;}
            }
            res.push_back(count);
        }
        return res;
    }
};