class Solution {
public:
    bool checkIfPangram(string sentence) {
        string my_str = "abcdefghijklmnopqrstuvwxyz";
        if(sentence.size()<26){return false;}
        for(int i = 0 ; i<sentence.size() ; i++){
            my_str.erase(remove(my_str.begin(), my_str.end(), sentence[i]), my_str.end());
        }
        if(my_str.size()!= 0){return false;}else{return true;}
        
        
    }
};