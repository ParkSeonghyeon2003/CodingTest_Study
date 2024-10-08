#include <string>
using namespace std;

string solution(string my_string)
{
	string answer = "";
	for (auto& chr : my_string) {
		if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u') continue;
		answer += chr;
	}
	return answer;
}