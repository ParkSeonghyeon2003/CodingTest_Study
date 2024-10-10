#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n)
{
    int answer, vSize = array.size();
    sort(array.begin(), array.end()); // �������� ����
    
    // ������ �ּҰ����� n�� ������ �ּҰ��� �ٷ� return
    if (n < array[0])
    {
        answer = array[0];
        return answer;
    }

    // i ��° �ε����� ���ҿ� i+1 �� ° �ε����� ������ n�� ���̰� ���� ���Ҹ� return
    for (int i = 0; i < vSize; i++)
    {
        if (array[i] <= n)
        {
            if (n - array[i] > array[i + 1] - n) answer = array[i + 1];
            else answer = array[i];
        }
    }
    return answer;
}