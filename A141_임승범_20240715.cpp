// A141. �쟾�솕踰덊샇紐⑸줉 - Programmers

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    
    bool answer = true;
    for (int i = 0; i < phone_book.size() - 1; i++) {
        if (phone_book[i + 1].find(phone_book[i]) == 0)
            answer = false;
    }
    
    return answer;
}