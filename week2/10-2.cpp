#include <vector>
using namespace std;
typedef vector<int> vec;
typedef vector<vec> vVec;

vVec solution(vec num_list, int n)
{
	int vSize = num_list.size();
	vVec answer(vSize / n);
	for (int i = 0; i < vSize; i++) {
		answer[i / n].push_back(num_list[i]);
	}
	return answer;
}