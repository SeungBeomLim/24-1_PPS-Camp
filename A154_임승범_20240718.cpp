// A154. 주유소 - Beakjoon

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> distance(N-1);
    vector<long long> oil_price(N);

    for (int i = 0; i < N-1; i++) {
        cin >> distance[i];
    }
    
    for (int i = 0; i < N; i++) {
        cin >> oil_price[i];
    }
    
    long long min_fee = 0;
    long long current_price = oil_price[0];
    
    for (int i = 0; i < N-1; i++) {
        if (oil_price[i] < current_price) {
            current_price = oil_price[i];
        }
        min_fee += current_price * distance[i];
    }
        
    cout << min_fee << endl;
    
    return 0;
}