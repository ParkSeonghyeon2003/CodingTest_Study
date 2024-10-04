#include <string>
#include <cmath>
using namespace std;

string solution(int age) {
    string answer = "";
    int digit = log10(age);
    char buf[digit+1];
    sprintf(buf, "%d", age);
    for (auto chr : buf) answer += chr - '0' + 'a';
    return answer;
}