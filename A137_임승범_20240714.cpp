// A137. K번째 수 - Baekjoon
// https://velog.io/@murraiya/%EB%B0%B1%EC%A4%80

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    
    int low = 1, high = k; // high = N * N
    while (low < high) {
        int mid = (low + high) / 2, count = 0;
        
        for (int i = 1; i <= N; i++) {
            count += min(mid / i, N);
        }
        
        if (count < k)
            low = mid + 1;
        else 
            high = mid;
    }
    
    cout << high << endl;
    
    return 0;
}