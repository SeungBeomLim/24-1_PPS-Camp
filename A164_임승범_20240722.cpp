// A162. 가장 가까운 글자 - Programmers

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string str = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (str.find(s[i]) == string::npos)
            answer.push_back(-1);
        else
            answer.push_back(i - str.rfind(s[i]));
            
        str.push_back(s[i]);
    }
    
    return answer;
}