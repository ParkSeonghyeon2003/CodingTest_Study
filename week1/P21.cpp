#include <string>
using namespace std;

string solution(string str)
{
	string answer = "";
	// iterator�� ����� ������ ���ڿ� ��ȸ ����.
	for (auto it = str.rbegin(); it != str.rend(); it++) answer += *it;
	return answer;
}