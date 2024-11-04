#include <string>
#include <vector>

using namespace std;

double calculateGradient(const vector<int>& p1, const vector<int>& p2)
{
    return (double)(p1[1] - p2[1]) / (p1[0] - p2[0]);
}

int solution(vector<vector<int>> dots)
{
    int p1Idx, p2Idx;
    double gradient1, gradient2;
    for (int i = 1; i < 4; i++)
    {
        p1Idx = 0; p2Idx = 0;
        gradient1 = calculateGradient(dots[i], dots[0]);
        for (int j = 1; j < 4; j++)
        {
            if (j != i && p1Idx == 0) p1Idx = j;
            else if (j != i) p2Idx = j;
        }
        gradient2 = calculateGradient(dots[p1Idx], dots[p2Idx]);
        if (gradient1 == gradient2) return 1;
    }
    return 0;
}