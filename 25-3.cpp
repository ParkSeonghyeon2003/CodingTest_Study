#include <string>

using namespace std;

string shifting(string str)
{
    return str[str.length() - 1] + str.substr(0, str.length() - 1);
}

int solution(string A, string B)
{
    for (int i = 0; i < A.length(); i++)
    {
        if (A == B) return i;
        A = shifting(A);
    }
    return -1;
}