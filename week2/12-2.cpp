#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (auto& chr : my_string) {
        if (chr >= '0' && chr <= '9') answer.push_back(chr - '0');
    }
    sort(answer.begin(), answer.end());
    return answer;
}