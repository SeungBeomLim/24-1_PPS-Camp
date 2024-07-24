// A178. 나는야 포켓몬 마스터 이다솜 - Baekjoon

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    
    unordered_map<string, int> nameToNumber;
    vector<string> numberToName(N + 1);
    string pokeName;
    
    for (int i = 1; i <= N; i++) {
        cin >> pokeName;
        nameToNumber[pokeName] = i;
        numberToName[i] = pokeName;
    }
    
    string input;
    for (int i = 0; i < M; i++) {
        cin >> input;
        if (isdigit(input[0])) {
            int num = stoi(input);
            cout << numberToName[num] << '\n';
        } else {
            cout << nameToNumber[input] << '\n';
        }
    }

    return 0;
}