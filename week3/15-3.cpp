#include <string>
#include <map>
#include <algorithm>

using namespace std;

string solution(string s)
{
    string answer = "";
    map<char, int> cntChr;
    for (auto& chr : s)
    {
        if (cntChr.count(chr) == 0) cntChr[chr] = 1;
        else cntChr[chr]++;
    }
    for (auto& p : cntChr)
    {
        if (p.second == 1) answer += p.first;
    }
    sort(answer.begin(), answer.end());
    return answer;
}