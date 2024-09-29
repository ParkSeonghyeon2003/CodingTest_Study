#include <vector>
using namespace std;

double solution(vector<int> numbers)
{
	double avg = 0;
	for (int i = 0; i < numbers.size(); i++) avg += numbers[i];
	avg /= numbers.size();
	return avg;
}