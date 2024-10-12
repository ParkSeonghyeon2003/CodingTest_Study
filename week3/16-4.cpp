#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2)
{
    int answer = 0;
    vector<string>::iterator iter;
    for (auto& str : s1)
    {
        iter = find(s2.begin(), s2.end(), str);
        if (iter != s2.end()) answer++;
    }
    return answer;
}