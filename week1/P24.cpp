#include <string>
using namespace std;

string solution(string str, int n)
{
	string answer = "";
	for (auto& chr : str) {
		for (int i = 0; i < n; i++) answer += chr;
	}
	return answer;
}