#include <vector>
using namespace std;

// 유클리드 호제법
int gcd(int a, int b) {
    int r;
    int bigger = a >= b ? a : b;
    int smaller = a < b ? a : b;
    while (smaller != 0) {
        r = bigger % smaller;
        bigger = smaller;
        smaller = r;
    }
    return bigger;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer(2);
    int numer = numer1 * denom2 + numer2 * denom1; // 통분
    int denom = denom1 * denom2; // 통분

    int gcdV = gcd(numer, denom); // 최대공약수 구하기

    answer[0] = numer / gcdV; answer[1] = denom / gcdV; // 최대공약수로 기약분수 만들기
    return answer;
}