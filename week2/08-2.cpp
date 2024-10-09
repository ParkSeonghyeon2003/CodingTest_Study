#include <string>
using namespace std;

string solution(int age) {
    string answer = to_string(age);
    for (auto& chr : answer) chr += 'a' - '0';
    return answer;
}