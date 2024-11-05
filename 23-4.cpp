#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db)
{
    for (const auto& member : db)
    {
        if (id_pw[0] == member[0])
        {
            if (id_pw[1] == member[1]) return "login";
            else return "wrong pw";
        }
    }
    return "fail";
}