#include <string>
using namespace std;

string solution(string str)
{
	string answer = "";
	// iterator를 사용해 역으로 문자열 순회 가능.
	for (auto it = str.rbegin(); it != str.rend(); it++) answer += *it;
	return answer;
}