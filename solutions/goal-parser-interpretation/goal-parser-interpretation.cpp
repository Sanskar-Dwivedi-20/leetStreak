class Solution {
public:
    string interpret(string command) {
        string str ="";

        for(int i =0; i< command.length(); i++){
            if(command[i] == 'G') str += 'G';
            else if(command[i] =='(' && command[i+1] == ')') str += 'o';
            else if(command[i] == '(' ){
                str += "al";
                i +=3;
            }
        }
        return str;
    }
};