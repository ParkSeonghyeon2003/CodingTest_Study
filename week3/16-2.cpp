#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array)
{
	auto maxIter = max_element(array.begin(), array.end());
	int maxIndex = distance(array.begin(), maxIter);
	return vector<int> {*maxIter, maxIndex};
}