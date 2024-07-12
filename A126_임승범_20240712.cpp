// A126. 한수 - Baekjoon

#include <iostream>

using namespace std;

int calculateNum(int N) {
    int count = 0;
    
    if (N < 100) {
        return N;
    }
    else {    
        count = 99;
        
        for (int i = 100; i <= N; i++) {
            int Hundreds_digit = i / 100;
            int tens_digit = (i / 10) % 10;
            int units_digit = i % 10;
            
            if ((Hundreds_digit - tens_digit) == (tens_digit - units_digit)) {
                count++;
            }
        }       
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;
    
    int result = calculateNum(N);
    
    cout << result << endl;
    
    return 0;
}