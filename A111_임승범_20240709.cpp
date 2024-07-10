// 3000번 버스 - Baekjoon

#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int k;
        cin >> k;
        
        int people = 0;
        while(k--) {
            people = (people + 0.5) * 2;
        }
        cout << people << endl;
    }
    
    return 0;
}