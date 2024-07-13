// A135. 베스트셀러 - Baekjoon
// solve by use a 'map' data structure

#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<string, int> bookList;
    string bookName = "";
    for (int i = 0; i < N; i++) {
        cin >> bookName;
        
        if (bookList.find(bookName) == bookList.end()) {
            bookList.insert({bookName, 1});
        }
        else {
            bookList[bookName]++;
        }
    }
    
    int max = 0;
    string result = "";
    for (auto i: bookList) {
        if (i.second > max)
            result = i.first, max = i.second;
    }
    
    cout << result << endl;
           
    return 0;
}