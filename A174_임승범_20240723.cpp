// A174. 명예의 전당 (1) - Programmers

#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    multiset<int> st;
    vector<int> answer;
    
    for (int i = 0; i < score.size(); i++) {
        st.insert(score[i]);

        if (st.size() > k) {
            st.erase(st.begin());
        }

        answer.push_back(*st.begin());
    }
    
    return answer;
}