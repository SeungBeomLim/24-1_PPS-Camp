// A128. 균형잡힌 세상 - Baekjoon

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string line;
    
    while (true) {
        getline(cin, line);
        if (line == ".") break;
        
        stack<char> stack;
        bool isBalanced = true;
        
        for (char ch : line) {
            if (ch == '(' || ch == '[') {
                stack.push(ch);
            }
            else if (ch == ')') {
                if (stack.empty() || stack.top() != '(') {
                    isBalanced = false;
                    break;
                } else {
                    stack.pop();
                }
            }
            else if (ch == ']') {
                if (stack.empty() || stack.top() != '[') {
                    isBalanced = false;
                    break;
                } else {
                    stack.pop();
                }
            }
        }
        
        if (isBalanced && stack.empty()) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}