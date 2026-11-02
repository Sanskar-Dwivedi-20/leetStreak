class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height = 0;
        int maxHeight = 0;

        for(int i = 0; i < gain.size(); i++){
            height += gain[i];
            if(height > maxHeight) maxHeight = height;
        }
        return maxHeight;
    }
};