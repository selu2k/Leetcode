class Solution {
public:
    bool isRobotBounded(string inst) {
        int x = 0,y = 0;
        char dir = 'N';
        int n = inst.size();
        for(int i = 0 ; i<n ; i++){
            if(inst[i] == 'G'){
                if(dir == 'N'){
                    y++;
                }
                else if( dir == 'W'){
                    x--;    
                }
                else if( dir == 'E'){
                    x++;
                }
                else if( dir == 'S'){
                    y--;
                }
            }
            else if( inst[i] == 'L'){
                if(dir == 'N'){
                    dir = 'W';
                }
                else if( dir == 'W'){
                    dir = 'S';    
                }
                else if( dir == 'E'){
                    dir = 'N';
                }
                else if( dir == 'S'){
                    dir = 'E';
                }
            }
            else if( inst[i] == 'R'){
                if(dir == 'N'){
                    dir = 'E';
                }
                else if( dir == 'W'){
                    dir = 'N';    
                }
                else if( dir == 'E'){
                    dir = 'S';
                }
                else if( dir == 'S'){
                    dir = 'W';
                }
            }
        }
        if(x==0 && y==0){
            return true;
        }else{
            if(dir != 'N') return true;
        }
        return false;
        
    }
};