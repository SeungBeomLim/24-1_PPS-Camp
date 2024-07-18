// A153. ATM - Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> waiting(N);
    for (int i = 0; i < N; i++) {
        cin >> waiting[i];
    }
    
    sort(waiting.begin(), waiting.end());
    
    int time_sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            time_sum += waiting[j];
        }
    }
    
    cout << time_sum << endl;
        
    return 0;
}