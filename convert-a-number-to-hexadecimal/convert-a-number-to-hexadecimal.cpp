class Solution {
public:
    string toHex(int num) {
        std::stringstream ss;
        ss <<std::hex << num;
        std::string res = ss.str();
        return res;
    }
};