// A197. 공 바꾸기 - Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> basket(N+1);
    for (int i = 1; i <= N; i++) {
        basket[i] = i;
    }
    
    int i, j;
    for (int k = 0; k < M; k++) {
        cin >> i >> j;
        swap(basket[i], basket[j]);
    }
    
    for (int i = 1; i <= N; i++) {
        cout << basket[i] << " ";
    }
    
    return 0;
}