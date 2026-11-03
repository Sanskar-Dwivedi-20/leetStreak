class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char c : jewels){
            for(char ch : stones){
                if( c == ch ) count++;
            }
        }
        return count;
    }
};