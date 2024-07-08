// A110. 거스름돈 - Baekjoon

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> money = {500, 100, 50, 10, 5, 1};
    int pay;
    cin >> pay;
    
    int res = 1000 - pay;
    int count = 0, i = 0;
    while (res > 0) {
        if (res >= money[i]) {
            res -= money[i];
            count++;
        }
        else
            i++;
    }
    
    cout << count;
    
    return 0;
}