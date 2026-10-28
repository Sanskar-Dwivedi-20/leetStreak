class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int evenC =0;
        for(int num: nums){
            int digitC=0;
            while(num){
                num /= 10;
                digitC++;
            }
            if(digitC % 2 ==0) evenC++;
        }
        return evenC;
    }
};