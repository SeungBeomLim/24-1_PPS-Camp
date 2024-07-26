// A193. 코딩은 체육과목 입니다 - Baekjoon

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    string name = "";
    
    for (int i = 0; i < N/4; i++) {
        name += "long ";
    }
    
    cout << name + "int" << endl;
    
    return 0;
}