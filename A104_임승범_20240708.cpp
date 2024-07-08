// A104. 욱제는 효도쟁이야!! // Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> cost;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cost.push_back(temp);
    }
    
    sort(cost.begin(), cost.end());
    int result = 0;
    for (int i = 0; i < n - 1; i++) {
        result += cost[i];
    }
    
    cout << result;
    
    return 0;
}