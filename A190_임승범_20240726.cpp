// A190. 주사위 세 개 - Baekjoon

#include <iostream>

using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    
    if (d1 == d2  && d2 == d3) {
        cout << 10000 + d1 * 1000 << endl;
    }

    else if (d1 == d2 || d2 == d3 || d3 == d1) {
        if (d1 == d2)
            cout << 1000 + (d1 * 100) << endl;
        else if (d2 == d3)
            cout << 1000 + (d2 * 100) << endl;
        else
            cout << 1000 + (d3 * 100) << endl;
    }
    else {
        if (d1 > d2 && d1 > d3)
            cout << d1 * 100 << endl;
        else if (d2 > d1 && d2 > d3)
            cout << d2 * 100 << endl;
        else
            cout << d3 * 100 << endl;
    }
    
    return 0;
}