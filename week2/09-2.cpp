#include <string>
using namespace std;

string solution(string letter)
{
	int i, strLen = letter.length();
	string answer = "";
	string temp = "";
	string morse[] = {
		".-","-...","-.-.","-..",
		".","..-.","--.","....",
		"..",".---","-.-",".-..",
		"--","-.","---",".--.",
		"--.-",".-.","...","-",
		"..-","...-",".--","-..-",
		"-.--","--.."
	};
	for (int idx = 0; idx < strLen; idx++) {
		if (idx == strLen - 1) temp += letter[idx];
		if (letter[idx] == ' ' || idx == strLen - 1) {
			for (i = 0; i < 26; i++) {
				if (morse[i] == temp) break;
			}
			answer += i + 'a';
			temp = "";
			continue;
		}
		temp += letter[idx];
	}
	return answer;
}