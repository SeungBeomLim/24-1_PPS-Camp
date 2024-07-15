// A140. �룿耳꾨が - Programmers

#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums) {
    unordered_set<int> uset(nums.begin(), nums.end());
    
    return min(uset.size(), nums.size() / 2);
}