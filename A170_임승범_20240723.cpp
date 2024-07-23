// A170. 부족한 금액 계산하기 - Programmers

using namespace std;

long long solution(int price, int money, int count) {
    long long fee = 0;
    for (int i = 1; i <= count; i++) {
        fee += i * price;
    }
    
    return (money >= fee) ? 0 : fee - money;
}