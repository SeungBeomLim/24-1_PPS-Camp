// A114. Prime Arrangements - Leetcode

class Solution {
public:
    int mod = 1e9 + 7;

    long long factorial (int n) {
        return (n == 1 || n == 0) ? 1 : ((n % mod) * factorial(n - 1) % mod) % mod;
    }

    bool isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int numPrimeArrangements(int n) {
        int primeNum = 0;

        for (int i = 1; i <= n; i++) {
            if (isPrime(i))
                primeNum++;
        }

        return (factorial(n - primeNum) * factorial(primeNum)) % mod;
    }
};