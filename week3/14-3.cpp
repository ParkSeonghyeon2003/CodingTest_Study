#include <string>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    int len = cipher.length();
    for (int i = code - 1; i < len; i += code)
        answer += cipher[i];
    return answer;
}