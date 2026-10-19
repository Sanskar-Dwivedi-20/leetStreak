class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int cal;
        int deletions = 0;
        for(int i = 0; i< nums.size()-1; i++){
            cal = nums[i] ^ nums[i + 1];
            if(cal == 0){
                nums.erase(nums.begin() + i);
                deletions++ ;
                i-- ;
            }
        }
        return deletions;
    }
};