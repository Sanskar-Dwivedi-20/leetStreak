class Solution {
public:
    char findTheDifference(string s, string t) {
        
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // int i=0, j=0;
        // while( i < s.size() && j < t.size()){
        //     if(s[i] != t[j]){
        //         break;
        //     }
        //     i++; 
        //     j++;
        // }
        // return t[j];


        int sum = 0;
        for (char c : s) {
        sum += static_cast<int>(c);}

        int expSum = 0;
        for (char ch : t) {
        expSum += static_cast<int>(ch);}

        int ans = expSum - sum;

        return static_cast<char>(ans);
    
    }
};