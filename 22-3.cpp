#include <vector>

using namespace std;

bool checkOverlapped(const vector<vector<int>>& lines, const float& point)
{
    int cnt = 0;
    if (lines[0][0] <= point && point <= lines[0][1]) cnt++;
    if (lines[1][0] <= point && point <= lines[1][1]) cnt++;
    if (lines[2][0] <= point && point <= lines[2][1]) cnt++;
    if (cnt >= 2) return true;
    else return false;
}

int solution(vector<vector<int>> lines)
{
    int start = lines[0][0] < lines[1][0] ? lines[0][0] : lines[1][0];
    start = start < lines[2][0] ? start : lines[2][0];

    int end = lines[0][1] > lines[1][1] ? lines[0][1] : lines[1][1];
    end = end > lines[2][1] ? end : lines[2][1];

    int len = 0;

    for (float point = start + 0.5; point < end; point++)
        if (checkOverlapped(lines, point)) len++;

    return len;
}