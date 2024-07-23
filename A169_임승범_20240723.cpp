// A169. �뻹踰꾧굅 留뚮뱾湲� - Programmers

#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) {
    stack<int> st;
    int burger = 0;
    
    for (int i = 0; i < ingredient.size(); i++) {
        st.push(ingredient[i]);
        
        if (st.size() >= 4) {
            vector<int> temp;
            
            for (int j = 0; j < 4; j++) {
                temp.push_back(st.top());
                st.pop();
            }
            
            reverse(temp.begin(), temp.end());
            
            if (temp == vector<int>{1, 2, 3, 1})
                burger++;
            else {
                for (int j = 0; j < 4; ++j) {
                    st.push(temp[j]);
                }
            }
        }
    }
            
    return burger;
}