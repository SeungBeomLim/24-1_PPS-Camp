// A127. 최소공배수 - Baekjoon
// 유클리드 호제법 - Euclidean Algorithm

#include <iostream>

using namespace std;

int calculateGCD (int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int calculateLCM (int a, int b) {
    return a * b / (calculateGCD(a, b));
}
int main() {
    int T;
    cin >> T;
    
    int a, b;
    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        
        int lcm = calculateLCM(a, b);
        cout << lcm << "\n";
    }
    
    return 0;
}