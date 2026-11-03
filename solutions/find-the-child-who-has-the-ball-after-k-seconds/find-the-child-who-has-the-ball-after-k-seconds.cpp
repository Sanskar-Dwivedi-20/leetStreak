class Solution {
public:
    int numberOfChild(int n, int k) {
        int pos =0;
        int turn =1;
        for(int i=0; i<k; i++){
            pos += turn;

            if(pos == n-1) turn =-1;
            else if(pos == 0) turn =1;
        }
        return pos;
    }
};