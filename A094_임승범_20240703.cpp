// A094. 크로아티아 알파벳 - Baekjoon

#include <iostream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    int count = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == 'c') {
            if (line[i + 1] == '-' || line[i + 1] == '=') {
                i++;
            }   
        }
        else if (line[i] == 'd') {
            if (line[i + 1] == 'z') {
                if (line[i + 2] == '=') {
                    i += 2;
                }
            }
            else if (line[i + 1] == '-') {
                i++;
            }
        }
        else if (line[i] == 'l' || line[i] == 'n') {
            if (line[i + 1] == 'j') {
                i++;
            }
        }
        else if (line[i] == 's' || line[i] == 'z') {
            if (line[i + 1] == '=') {
                i++;
            }
        }
        count++;
    }

    cout << count;

    return 0;
}