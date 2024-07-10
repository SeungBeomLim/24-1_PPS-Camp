// A117. Distance Between Bus Stops - Leetcode

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int path[2] = {0};
        for (int i = start; i != destination; i = (i + 1) % distance.size()) path[0] += distance[i];
        for (int i = destination; i != start; i = (i + 1) % distance.size()) path[1] += distance[i];

        return min(path[0], path[1]);
    }
};