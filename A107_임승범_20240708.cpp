// A107. 쉽게 푸는 문제 - Baekjoon

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    
    vector<int> arr;
    int i = 1;
    while (arr.size() <= end) {
        for (int j = 1; j <= i; j++) {
            arr.push_back(i);
        }
        i++;
    }
    
    int sum = 0;
    for (int i = start - 1; i <= end - 1; i++)
        sum += arr[i];
    
    cout << sum;
    
    return 0;
}