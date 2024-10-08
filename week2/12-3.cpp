#include <string>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (auto& chr : my_string) {
        if (chr >= '0' && chr <= '9') {
            answer += chr - '0';
        }
    }
    return answer;
}