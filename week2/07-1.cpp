#include <string>
using namespace std;

string solution(string my_string, string letter) {
	string answer = "";
	for (auto& chr : my_string) // iterator ��ȸ. chr�� char&���� ��.
		if (chr != letter[0]) answer += chr; // letter�� �ƴϸ� answer�� �߰�
	return answer;
}