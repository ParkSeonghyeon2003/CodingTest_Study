#include <string>
using namespace std;

int solution(int order)
{
    int answer = 0;
    string ordStr = to_string(order);
    for (auto& chr : ordStr)
        if ((chr - '0') % 3 == 0 && chr != '0') answer++; // 303 따위의 정수도 고려해야 한다.
    return answer;
}