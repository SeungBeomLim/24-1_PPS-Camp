// A130. 제로 - Baekjoon

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K;
    cin >> K;
    
    int num, sum = 0;
    vector<int> vec;
    vec.reserve(K);
    
    for (int i = 0; i < K; i++) {
        cin >> num;
        if (num == 0 && !vec.empty()) {
            sum -= vec.back();
            vec.pop_back();
        }
        else {
            vec.push_back(num);
            sum += num;
        }
    }

    cout << sum << endl;
        
    return 0;
}