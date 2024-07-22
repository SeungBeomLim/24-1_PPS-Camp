// A163. 개인정보 수집 유효기간 - Programmers

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

int dateToDays(string date) {
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    
    return (year*28*12) + (month*28) + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    unordered_map<char, int> termDuration;
    for (string term: terms) {
        stringstream ss(term);
        char type;
        int duration;
        
        ss >> type >> duration;
        
        termDuration[type] = duration;
    }
    
    int todayInDays = dateToDays(today);
    vector<int> answer;
    for (int i = 0; i < privacies.size(); i++) {
        stringstream ss(privacies[i]);
        string date;
        char type;
        ss >> date >> type;
        
        int personalDate = dateToDays(date);
        int expireDays = personalDate + (termDuration[type] * 28);
        
        if (expireDays <= todayInDays) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}