#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list)
{
	vector<int> answer(2);
	for (auto &it : num_list) {
		if (it % 2 == 0) answer[0]++;
		else answer[1]++;
	}
	return answer;
}