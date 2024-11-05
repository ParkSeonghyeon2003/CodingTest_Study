#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    string dict[4] = {"aya", "ye", "woo", "ma"};

    for (string& str : babbling)
    {
        while (true)
        {
            bool isErased = false;
            if (str == "")
            {
                answer++;
                break;
            }
            for (int i = 0; i < 4; i++)
            {
                string word = dict[i];
                string sub = str.substr(0, word.length());
                if (word == sub)
                {
                    isErased = true;
                    str.erase(0, word.length());
                }
            }
            if (!isErased)
            {
                break;
            }
        }
    }

    return answer;
}