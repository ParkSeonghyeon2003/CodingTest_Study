#include <vector>

using namespace std;

vector<int> solution(int num, int total)
{
    vector<int> answer;
    int i = -num;
    while (true)
    {
        int sum = 0;
        for (int j = 0; j < num; j++) sum += i + j;
        if (sum == total) break;
        i++;
    }
    for (int j = 0; j < num; j++)
        answer.push_back(i + j);
    return answer;
}