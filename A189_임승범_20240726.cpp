// A189. 알람 시계 - Baekjoon

#include <iostream>

using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    if (M >= 45) {
        M -= 45;
    } else {
        M += 15;
        if (--H < 0) {
            H = 23;
        }
    }

    cout << H << " " << M << endl;

    return 0;
}