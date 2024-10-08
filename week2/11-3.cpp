#include <vector>
using namespace std;

int solution(vector<int> numbers)
{
	int max = 0;
	int temp;
	for (int i = 0; i < numbers.size() - 1; i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			temp = numbers[i] * numbers[j];
			if (max < temp) max = temp;
		}
	}
	return max;
}