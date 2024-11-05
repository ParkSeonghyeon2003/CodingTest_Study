#include <vector>

using namespace std;

int solution(vector<int> common)
{
    int answer;
    int d = common[1] - common[0];
    int r = common[1] / common[0];
    if (common[2] == common[1] + d)
        answer = common[common.size() - 1] + d;
    else
        answer = common[common.size() - 1] * r;
    return answer;
}