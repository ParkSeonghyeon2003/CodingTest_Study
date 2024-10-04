#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

// π∫∞° ∫Ò»ø¿≤¿˚¿∏∑Œ «¨ ¥¿≥¶
vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    vector<pair<int, int>> v;
    for (int i = 0; i < emergency.size(); i++) {
        pair<int, int> temp;
        temp.first = i;
        temp.second = emergency[i];
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++) answer[v[i].first] = i + 1;
    return answer;
}