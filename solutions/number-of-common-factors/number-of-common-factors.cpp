class Solution {
public:
    int commonFactors(int a, int b) {
        while(b != 0){
            int rem = a%b;
            a = b;
            b = rem;
        }
        int ans=0;
        for(int i=1; i <= a; i++){
            if(a % i == 0) ans++;
        }
        return ans;
    }
};