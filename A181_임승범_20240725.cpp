// A181. 곱셈 - Baekjoon

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    int ones = num1 * (num2 % 10);
    cout << ones << endl;
    
    int tens = num1 * (num2 / 10 % 10);
    cout << tens << endl;
    
    int hundreds = num1 * (num2 / 100);
    cout << hundreds << endl;
    
    cout << ones + tens * 10 + hundreds * 100 << endl; 
    
    return 0;
}