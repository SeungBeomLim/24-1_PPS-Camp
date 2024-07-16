// A149. 덩치 - Beakjoon

#include <iostream>
#include <vector>

using namespace std;

bool compare(pair<int, int> b1, pair<int, int> b2) {
    return b1.first > b2.first && b1.second > b2.second;
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> big(N);
    for (int i = 0; i < N; i++) {
        cin >> big[i].first >> big[i].second;
    }
    
    vector<int> grade(N, 1);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && compare(big[j], big[i]))
                grade[i]++;
        }
    }
    
    for (int i : grade) {
        cout << i << endl;    
    }
    
    return 0;
}