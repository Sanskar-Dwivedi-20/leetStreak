class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int n=nums.size();
    
        int maxVal = *std::max_element(nums.begin(), nums.end());
        
        int idx = std::distance(nums.begin(), std::max_element(nums.begin(), nums.end()));
        
        for(int i=0; i<n; i++){
            if (i != idx){
                if(nums[idx] < nums[i]*2){
                    return -1;
                }
            }
        }
        return idx;
    }
};