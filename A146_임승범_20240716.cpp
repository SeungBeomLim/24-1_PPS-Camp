// A146. 최솟값 만들기 - Programmers

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<>());
    
    int min = 0;
    for (int i = 0; i < A.size(); i++) {
        min += A[i] * B[i];
    }  

    return min;
}