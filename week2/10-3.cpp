#include <vector>
using namespace std;

int solution(vector<int> numbers, int k)
{
	int answer = 0, thr = 1, i = 0;
	int vSize = numbers.size();
	while (thr != k) {
		i += 2;
		if (i > vSize - 1) i -= vSize;
		answer = numbers[i];
		thr++;
	}
	return answer;
}
