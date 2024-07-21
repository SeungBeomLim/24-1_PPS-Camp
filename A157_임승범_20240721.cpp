// 怨듭쑀湲� �꽕移� - Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canPlaceRouters (vector<int> &coordinate, int C, int distance) {
    int count = 1, last_position = coordinate[0];
    
    for (size_t i = 1; i < coordinate.size(); i++) {
        if (coordinate[i] - last_position >= distance) {
            count++;
            last_position = coordinate[i];
        }
        if (count >= C)
            return true;
    }
    
    return false;
}

int main() {
    int N, C;
    cin >> N >> C;
    
    vector<int> coordinate(N);
    for (int i = 0; i < N; i++) {
        cin >> coordinate[i];        
    }
    
    sort(coordinate.begin(), coordinate.end());
    
    int left = 1, right = coordinate[N-1] - coordinate[0], answer = 0;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(canPlaceRouters(coordinate, C, mid)) {
            answer = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    
    cout << answer << endl;
    
    return 0;
}