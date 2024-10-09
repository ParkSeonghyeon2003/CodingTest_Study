#include <string>
#include <vector>
using namespace std;

int solution(string s)
{
	int answer = 0;
	vector<int> v;
	string temp = "";
	int sLen = s.length();
	for (int i = 0; i < sLen; i++) {
		char chr = s[i];
		if (chr == ' ' || (i == sLen - 1 && chr != 'Z')) {
			temp += chr;
			v.push_back(atoi(temp.c_str()));
			temp = "";
		}
		else if (chr == 'Z') {
			v.pop_back();
		}
		else {
			temp += chr;
		}
	}
	for (auto& elem : v) {
		answer += elem;
	}
	return answer;
}