#include <string>
using namespace std;

string solution(string rsp)
{
	string answer = "";
	for (auto& chr : rsp) {
		if (chr == '2') answer += '0';
		else if (chr == '0') answer += '5';
		else answer += '2';
	}
	return answer;
}