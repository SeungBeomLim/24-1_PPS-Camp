// A160. 덧칠하기 - Programmers

#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int left = 0, answer = 0;
    
    for (int i = 0; i < section.size(); i++) {
        if (section[i] > left) {
            left = section[i] + m - 1;
            answer++;
        }
    }
    
    return answer;
}