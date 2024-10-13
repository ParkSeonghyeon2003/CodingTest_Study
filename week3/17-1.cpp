#include <string>

using namespace std;

int solution(int num, int k)
{
    string str = to_string(num);
    auto it = str.find(k + '0');
    if (it == string::npos) return -1;
    else return it + 1;
}