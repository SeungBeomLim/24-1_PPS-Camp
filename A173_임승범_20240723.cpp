// A173. 없는 숫자 더하기 - Programmers

#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    
    return 45 - sum;
}