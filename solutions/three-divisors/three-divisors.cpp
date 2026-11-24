class Solution {
public:
    bool isThree(int n) {
        int ans = 0;
    if (n<=3) return false;
    else 
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                ans++;
            }
        }
        if(ans == 3) return true;
        else return false;
    }
};