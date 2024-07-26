// A196. 개수 세기 - Baekjoon

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, V, count = 0;
    cin >> N;
    
    vector<int> num(N);
    for (int i = 0; i < N; i++)
        cin >> num[i];
    
    cin >> V;
    
    for (int i = 0; i < N; i++)
        if (num[i] == V)
            count++;
    
    cout << count << endl;
    
    return 0;
}