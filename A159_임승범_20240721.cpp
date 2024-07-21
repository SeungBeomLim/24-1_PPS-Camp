// 159. 바탕화면 정리 - Programmers

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer = {100, 100, -100, -100};
    
    int xSize = wallpaper[0].size();
    int ySize = wallpaper.size();
    
    for (int y = 0; y < ySize; y++)
        for (int x = 0; x < xSize; x++)
            if (wallpaper[y][x] == '#') {
                answer[0] = min(answer[0], y);
                answer[1] = min(answer[1], x);
                answer[2] = max(answer[2], y + 1);
                answer[3] = max(answer[3], x + 1);
            }
    
    return answer;
}