#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n)
{
    int answer, vSize = array.size();
    sort(array.begin(), array.end()); // 오름차순 정렬
    
    // 벡터의 최소값보다 n이 작으면 최소값을 바로 return
    if (n < array[0])
    {
        answer = array[0];
        return answer;
    }

    // i 번째 인덱스의 원소와 i+1 번 째 인덱스의 원소중 n의 차이가 적은 원소를 return
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