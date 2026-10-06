class Solution {
public:
    int minAddToMakeValid(string s) {
       //calculate valid parantheses = score of parantheses
       //no. of stings in valid parantheses= 2* score
       //invalid parantheses = s.size - no of valid strings
    //    int score = 0, depth = 0, valid = 0;

    //     for (int i = 0; i < s.size(); ++i) {
    //         if (s[i] == '(') {
    //             ++depth;
    //         } else {
    //             --depth;
    //             if (s[i - 1] == '(') {
    //                 score += 1 << depth;
    //             }
    //         }
    //     }

    //     valid = s.size() - 2*score;
    //     return valid;
        // problem if the string staars from ")"-> there will be no s[i-1] index to check
        int open = 0, ans = 0;
        for (char c :s ){
            if (c == '('){
                open++;
            }
            else{
                if(open > 0){
                    open--;}
                else {
                    ans++;}
            }
        }
        return open + ans;
    }
};