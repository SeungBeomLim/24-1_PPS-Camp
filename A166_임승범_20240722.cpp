// A166. 크기가 작은 부분 문자열 - Programmers

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int pSize = p.length();
    long long pNum = stoll(p);
    int count = 0;
    
    for (int i = 0; i < t.length() - pSize + 1; i++) {
        long long tNum = stoll(t.substr(i, pSize));
        if (tNum <= pNum)
            count++;
    }
    
    return count;
}