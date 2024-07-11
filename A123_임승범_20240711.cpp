// A123. 1�? 만들�? - Baekjoon

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
    // ���� ���: n�� 1�̸� 0���� �������� 1�� �ȴ�.
    if (n == 1) {
        return 0;
    }

    // �̹� ���� ����� ������ �� ����� ��ȯ�Ѵ�.
    if (memo[n] != -1) {
        return memo[n];
    }

    // 1�� ����.
    int result = minOperations(n - 1) + 1;

    // 2�� ���� �� ������ ������.
    if (n % 2 == 0) {
        result = min(result, minOperations(n / 2) + 1);
    }

    // 3���� ���� �� ������ ������.
    if (n % 3 == 0) {
        result = min(result, minOperations(n / 3) + 1);
    }

    // ����� �޸������̼� ���̺� �����Ѵ�.
    memo[n] = result;
    return result;
}
*/