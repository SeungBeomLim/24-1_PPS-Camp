// A158. 달리기 경주 - Programmers

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> playerIndex;
    
    for (int i = 0; i < players.size(); i++) {
        playerIndex[players[i]] = i;
    }
    
    for (string current_calling : callings) {
        int index = playerIndex[current_calling];
        
        if (index > 0) {
            swap(players[index], players[index-1]);
            
            playerIndex[players[index]] = index;
            playerIndex[players[index - 1]] = index - 1;
        }
    }
    
    return players;
}