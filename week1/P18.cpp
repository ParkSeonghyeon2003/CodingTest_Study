#include <vector>
using namespace std;

vector<int> solution(int money)
{
	vector<int> result;
	result.push_back(money / 5500);
	result.push_back(money % 5500);
	return result;
}