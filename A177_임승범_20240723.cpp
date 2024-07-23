// A177. 최소직사각형 - Programmers

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_width = 0, max_height = 0;
    
    for (auto size : sizes) {
        if (size[0] < size[1])
            swap(size[0], size[1]);
        
        max_width = max(max_width, size[0]);
        max_height = max(max_height, size[1]);
    }
    
    return max_width * max_height;
}