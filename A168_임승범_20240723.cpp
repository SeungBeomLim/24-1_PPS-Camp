// A168. 과일장수 - Programmers

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    sort(score.begin(), score.end(), greater<int>());
    
    int profit = 0;
    for (int i = 0; i + m <= score.size(); i += m) {
        profit += score[i + m - 1] * m;
    }
    
    return profit;
}