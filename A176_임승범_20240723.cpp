// A176. �굹癒몄��媛� 1�씠 �릺�뒗 �닔 李얘린 - Programmers

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 1)
            return i;
    }
    
    return n-1;
}