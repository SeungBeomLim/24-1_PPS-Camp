// A165. 기사단원의 무기 - Programmers

#include <string>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int sum = 0;
    
    for (int i = 1; i <= number; i++) {
        int count = 0;
        int sqrt_i = static_cast<int>(sqrt(i));
        
        for (int j = 1; j <= sqrt_i; j++) {
            if (i % j == 0) {
                count++;
                if (j != i / j) {
                    count++;
                }
            }
            
            if (count > limit) {
                count = power;
                break;
            }
        }
        
        sum += count;
    }
    
    return sum;
}