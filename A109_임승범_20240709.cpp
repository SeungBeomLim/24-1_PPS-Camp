// A109. 벨트 - Baekjoon

#include <iostream>

using namespace std;

int main() {
    int beltNum = 0;
    cin >> beltNum;
    
    int a, b, s, count = 0, num = 1;
    for (int i = 0; i < beltNum; i++) {
        cin >> a >> b >> s;
        num = num / a * b;
        count += s;
    }
    
    if (count % 2 == 0)
        cout << 0 << " " << num;
    else
        cout << 1 << " " << num;
    
    return 0;
}