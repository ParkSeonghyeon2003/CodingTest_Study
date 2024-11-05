#include <vector>
#include <algorithm>

using namespace std;

bool compare(const vector<int>& v1, const vector<int>& v2)
{
    if (v1[1] == v2[1]) return v1[0] > v2[0];
    return v1[1] < v2[1];
}

vector<int> solution(vector<int> numlist, int n)
{
    vector<vector<int>> diff(numlist.size());
    for (int i = 0; i < diff.size(); i++)
    {
        diff[i].push_back(numlist[i]);
        diff[i].push_back(abs(numlist[i] - n));
    }
    sort(diff.begin(), diff.end(), compare);
    vector<int> answer;
    for (int i = 0; i < diff.size(); i++)
    {
        answer.push_back(diff[i][0]);
    }
    return answer;
}