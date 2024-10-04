#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2)
{
	vector<int> answer;
	vector<int>::iterator iter;
	for (iter = numbers.begin() + num1;
		iter != numbers.begin() + num2 + 1; ++iter) {
		answer.push_back(*iter);
	}
	return answer;
}