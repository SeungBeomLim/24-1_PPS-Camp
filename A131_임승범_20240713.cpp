// A131. �넻怨꾪븰 - Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> numbers(N);
    vector<int> frequency(8001, 0);
    
    double sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];
        frequency[numbers[i] + 4000]++;
    }

    double mean = sum / N;
    cout << round(mean) + 0.0 << endl;

    sort(numbers.begin(), numbers.end());
    cout << numbers[N / 2] << endl;

    int max_freq = 0;
    for (int i = 0; i < 8001; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
        }
    }

    int mode = 0;
    bool first = true;
    for (int i = 0; i < 8001; i++) {
        if (frequency[i] == max_freq) {
            if (first) {
                mode = i - 4000;
                first = false;
            } else {
                mode = i - 4000;
                break;
            }
        }
    }

    cout << mode << endl;

    int range = numbers.back() - numbers.front();
    cout << range << endl;

    return 0;
}