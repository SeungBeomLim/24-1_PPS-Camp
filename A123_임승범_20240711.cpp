// A123. 1濡? 留뚮뱾湲? - Baekjoon

#include <iostream>
#include <vector>

using namespace std;

// Bottom-up D.P
int main() {
    int N;
    cin >> N;
    vector<int> dp(N + 1 ,0);
    
    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1;
        
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
            
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    
    cout << dp[N] << endl;
    
    return 0;
}

/*
// Tod-down using memoization D.P
int minOperations(int n) {
    // 기저 사례: n이 1이면 0번의 연산으로 1이 된다.
    if (n == 1) {
        return 0;
    }

    // 이미 계산된 결과가 있으면 그 결과를 반환한다.
    if (memo[n] != -1) {
        return memo[n];
    }

    // 1을 뺀다.
    int result = minOperations(n - 1) + 1;

    // 2로 나눌 수 있으면 나눈다.
    if (n % 2 == 0) {
        result = min(result, minOperations(n / 2) + 1);
    }

    // 3으로 나눌 수 있으면 나눈다.
    if (n % 3 == 0) {
        result = min(result, minOperations(n / 3) + 1);
    }

    // 결과를 메모이제이션 테이블에 저장한다.
    memo[n] = result;
    return result;
}
*/