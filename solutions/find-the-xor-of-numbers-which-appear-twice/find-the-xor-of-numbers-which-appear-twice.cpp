class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int freq[51] ={0};
        int ans =0;
        for(int num : nums){
            freq[num]++;
            if(freq[num] == 2) ans^= num;
        }
        return ans;
    }
};