// A143. 올바른 괄호 - Programmers

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool solution(string s) {
    stack<char> stack;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            stack.push(s[i]);
        else if (s[i] == ')') {
            if (stack.empty() || stack.top() != '(')
                return false;
            else
                stack.pop();
        }
    }
    
    if (!stack.empty())
        return false;

    return true;
}