// A138. 프린터 큐 - Baekjoon

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    int N, M;
    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        
        queue<pair<int, int>> q; // index + priority
        priority_queue<int> pq; // priority
        
        for (int i = 0; i < N; i++) {
            int priority;
            cin >> priority;
            q.push({i, priority});
            pq.push(priority);
        }
        
        int print_order = 0;
        while (!q.empty()) {
            int index = q.front().first;
            int priority = q.front().second;
            q.pop();
            
            if (priority == pq.top()) {
                pq.pop();
                print_order++;
                if (index == M) {
                    cout << print_order << endl;
                    break;
                }
            }
            else {
                q.push({index, priority});
            }
        }
    }
        
    return 0;
}