#include <string>

using namespace std;

string solution(string my_string) {
    for (auto& chr : my_string)
    {
        if (chr >= 'a' && chr <= 'z') chr = chr - 'a' + 'A';
        else chr = chr - 'A' + 'a';
    }
    return my_string;
}