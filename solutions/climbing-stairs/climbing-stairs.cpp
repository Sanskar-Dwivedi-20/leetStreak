class Solution {
public:
    int climbStairs(int n) {
        //1 stair - 1op
        //2 stair - 2op
        //3 stair - 3op
        //4 stair - 5op
        //5 stair - 8op

        // a =0; b =1
        int a=0;
        int b=1;
        int c=0;

        for (int i=0; i<n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};