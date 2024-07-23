// A171. 콜라 문제 - Programmers

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int count = 0, res = 0;
    while (n >= a) {
        count += (n / a) * b;
        res = n % a + (n / a) * b;
        n = res;
    }
    
    return count;
}