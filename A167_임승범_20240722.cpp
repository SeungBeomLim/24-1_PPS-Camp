// A167. 푸드 파이트 대회 - Programmers

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for (int i = 1; i < food.size(); i++) {
        int half_count = food[i] / 2;
        answer.append(half_count, '0' + i);
    }

    string answer_reverse = answer;
    reverse(answer_reverse.begin(), answer_reverse.end());

    answer += "0" + answer_reverse;

    return answer;
}