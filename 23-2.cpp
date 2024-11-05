#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> rank(score.size());
    vector<double> avg;
    for (int i = 0; i < score.size(); i++)
        avg.push_back((score[i][0] + score[i][1]) / 2.0);
    for (int i = 0; i < avg.size(); i++)
    {
        rank[i] = 1;
        for (int j = 0; j < avg.size(); j++)
            if (avg[i] < avg[j]) rank[i]++;
    }
    return rank;
}