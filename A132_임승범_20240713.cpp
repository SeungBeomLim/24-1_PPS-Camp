// A132. 터렛 - Baekjoon

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        int d = pow(x1 - x2, 2) + pow (y1 - y2, 2);
        int cmp1 = pow(r1 - r2, 2);
        int cmp2 = pow(r1 + r2, 2);
        
        if (d == 0) {
            if (cmp1 == 0)
                cout << "-1" << endl;
            else {
                cout << "0" << endl;
            }
        }
        else if (d == cmp1 || d == cmp2) {
            cout << "1" << endl;
        }
        else if (cmp1 < d && d < cmp2)
            cout << "2" << endl;
        else
            cout << "0" << endl;
    }  
    
    return 0;
}