#include <string>
using namespace std;

string solution(string str, string letter)
{
	string answer = "";
	char ltr = *letter.c_str();
	for (auto& chr : str)
		if (chr != ltr) answer += chr;
	return answer;
}