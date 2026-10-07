#include <stdbool.h>
#include <string.h>

bool helper(char* s, int i, char* stack, int top) {
    if (s[i] == '\0') {
        return top == -1;
    }

    char ch = s[i];

    if (ch == '(' || ch == '{' || ch == '[') {
        stack[++top] = ch;
        return helper(s, i + 1, stack, top);
    } else {
        if (top == -1) {
            return false;
        }

        char open = stack[top--];

        if ((ch == ')' && open != '(') ||
            (ch == '}' && open != '{') ||
            (ch == ']' && open != '[')) {
            return false;
        }

        return helper(s, i + 1, stack, top);
    }
}

bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];
    return helper(s, 0, stack, -1);
}
