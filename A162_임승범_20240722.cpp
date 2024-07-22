// A162. 카드 뭉치 - Programmers

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i = 0, j = 0;
    for (string target : goal) {
        if (target == cards1[i])
            i++;
        else if (target == cards2[j])
            j++;
        else
            return "No";
    }
    
    return "Yes";
}