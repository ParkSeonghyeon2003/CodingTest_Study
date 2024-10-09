#include <string>
#include <unordered_set>
using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> uSet;
    for (auto& chr : my_string) {
        if (uSet.count(chr) == 0) {
            answer += chr;
            uSet.insert(chr);
        }
    }
    return answer;
}