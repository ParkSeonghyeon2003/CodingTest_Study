#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> array)
{
    unordered_map<int, int> umap; // �ؽ� ��
    int max, maxV = 0; // �ֺ� pair�� first, second

    // �� ������Ʈ
    for (int i = 0; i < array.size(); i++) umap[array[i]]++;

    // ���ͷ����ͷ� ��ȸ�ϸ� �ֺ� ������Ʈ
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