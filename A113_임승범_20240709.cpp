// A113. 연결 요소의 개수 - Baekjoon
// DFS / BFS

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> list[1001];
int visited[1001];

void DFS (int vertex) {
    visited[vertex] = 1;
    for (int i = 0; i < list[vertex].size(); i++) {
        int index = list[vertex][i];
        if (visited[index] == 0) {
            DFS(index);
        }
    }
}

void BFS(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (q.size() != 0) {
        int current = q.front();
        q.pop();
        for (int i = 0; i < list[current].size(); i++) {
            if (visited[list[current][i]] == 0) {
                visited[list[current][i]] = 1; 
                q.push(list[current][i]);
            }
        }
    }
}

int main() {
    int vertexNum, edgeNum;
    cin >> vertexNum >> edgeNum;
    
    
    for (int i = 0; i < edgeNum; i++) {
        int u, v;
        cin >> u >> v;
        
        list[u].push_back(v);
        list[v].push_back(u);
    }
    
    int count = 0;
    for (int i = 1; i <= vertexNum; i++) {
        if (visited[i] == 0) {
            count++;
            DFS(i);
            // BFS(i);
        }
    }
    
    cout << count << "\n";
    
    return 0;
}
