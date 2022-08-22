class Solution {
public:
    bool divisorGame(int n) {
        //if prime subtract 1
        //n=2 for alice , true
        // n=3 for alice, false
        //n=4, for alice, can subtract 1 and make it 3 for bob , true
        //n=5, for alice, false
        // so anyone who gets 2 will win
        //alice needs to  start with even to keep it even
        if(n%2==0) return true;
        return false;
    }
};