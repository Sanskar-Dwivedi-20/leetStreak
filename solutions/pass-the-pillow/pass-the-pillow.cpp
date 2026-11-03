class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1;
        int turn = 1;
        for(int i=0; i<time; i++){
            pos += turn;
            if(pos == n) turn =-1;
            else if(pos == 1) turn = 1;
        }
        return pos;
    }
};