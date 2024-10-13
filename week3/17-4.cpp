#include <string>
#include <vector>

using namespace std;

vector<int> numbers;

void parsing(const string& str)
{
    string temp = "";
    int elem, sign = 1;
    string::const_iterator iter;
    for (iter = str.begin(); iter < str.end(); ++iter)
    {
        if (iter == str.end() - 1) temp += *iter;
        if (*iter == ' ' || iter == str.end() - 1)
        {
            elem = atoi(temp.c_str()) * sign;
            ++iter;
            if (*iter == '-') sign = -1;
            else sign = 1;
            ++iter;
            numbers.push_back(elem);
            temp = "";
        }
        else temp += *iter;
    }
    return;
}

vector<string> solution(vector<string> quiz)
{
    vector<string> answer;
    for (auto& str : quiz)
    {
        parsing(str);
        if (numbers[0] + numbers[1] == numbers[2])
            answer.push_back("O");
        else answer.push_back("X");
        numbers.clear();
    }
    return answer;
}