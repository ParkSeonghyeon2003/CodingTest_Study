#include <string>
#include <stack>

using namespace std;

stack<int> numbers;

// Push integer parsed from string.
void parsing(const string& str)
{
    string temp = "";
    int pushElem;
    int sign = 1;
    string::const_iterator iter;
    for (iter = str.begin(); iter < str.end(); ++iter)
    {
        if (iter == str.end() - 1) temp += *iter; // last char
        // push integer when meet space or last char.
        if (*iter == ' ' || iter == str.end() - 1)
        {
            // if latest operator = '-', multiply -1.
            pushElem = atoi(temp.c_str()) * sign;
            ++iter;
            if (*iter == '-') sign = -1;
            else sign = 1;
            ++iter;
            numbers.push(pushElem);
            temp = "";
        }
        else
            temp += *iter;
    }
    return;
}

int solution(string my_string)
{
    int answer = 0;
    parsing(my_string);
    while (!numbers.empty())
    {
        answer += numbers.top();
        numbers.pop();
    }
    return answer;
}