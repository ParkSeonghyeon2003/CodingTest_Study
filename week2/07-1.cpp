#include <string>
using namespace std;

string solution(string my_string, string letter) {
	string answer = "";
	for (auto& chr : my_string) // iterator 순회. chr는 char&형이 됨.
		if (chr != letter[0]) answer += chr; // letter가 아니면 answer에 추가
	return answer;
}