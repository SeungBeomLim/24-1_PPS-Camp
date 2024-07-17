// A151. �젙�닔 �궪媛곹삎 - Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1);
        for (int j = 0; j <= i; j++) {
            cin >> row[j];
        }
        triangle[i] = row;
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                triangle[i][j] += triangle[i-1][j];
            else if (j == i)
                triangle[i][j] += triangle[i-1][j-1];
            else
                triangle[i][j] += max(triangle[i-1][j-1], triangle[i-1][j]);
        }
    }
    
    int max_sum = *max_element(triangle[n-1].begin(), triangle[n-1].end());
    cout << max_sum << endl;
    
    return 0;
}