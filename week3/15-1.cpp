#include <string>
#include <vector>

using namespace std;

typedef long long ll;

vector<string> dict {
    "zero", "one", "two", "three",
    "four", "five", "six", "seven",
    "eight", "nine"
};

ll solution(string numbers)
{
    ll answer = 0;
    for (int i = 0; i < dict.size(); i++)
    {
        size_t pos;
        while (string::npos != (pos = numbers.find(dict[i])))
        {
            numbers.replace(pos, dict[i].length(), to_string(i));
        }
    }
    answer = atoll(numbers.c_str());
    return answer;
}