#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> array)
{
    unordered_map<int, int> umap; // 해쉬 맵
    int max, maxV = 0; // 최빈값 pair의 first, second

    // 빈도 업데이트
    for (int i = 0; i < array.size(); i++) umap[array[i]]++;

    // 이터레이터로 순회하며 최빈값 업데이트
    for (auto iter : umap) {
        if (iter.second > maxV) {
            maxV = iter.second;
            max = iter.first;
        }
        else if (iter.second == maxV) {
            max = -1;
        }
    }

    return max;
}