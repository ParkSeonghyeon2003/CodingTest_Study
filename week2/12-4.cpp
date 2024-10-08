#include <vector>
#include <set>
using namespace std;

bool isPrimeNumber(const set<int>& primeDivisor, const int& number)
{
    for (auto& it : primeDivisor) {
        if (number % it == 0) return false;
    }
    return true;
}

vector<int> solution(int n)
{
    vector<int> answer;
    set<int> primeDivisor;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrimeNumber(primeDivisor, i)) {
            primeDivisor.insert(i);
        }
    }
    answer.assign(primeDivisor.begin(), primeDivisor.end());
    return answer;
}