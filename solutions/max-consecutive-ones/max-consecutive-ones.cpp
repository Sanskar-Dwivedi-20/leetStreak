class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1=0, count2=0;

        for(int i=0; i< nums.size(); i++){
            if(nums[i]==0) count1 = 0;
            if(nums[i] ==1){
                count1++;
                count2 = max(count1,count2);}
        }
        return count2;
    }
};