#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int vSize = numbers.size();
    vector<int> answer(vSize);
    int temp, dir = 1;
    if (direction == "left") {
        temp = numbers[0];
        dir = -1;
    }
    else temp = numbers[vSize - 1];
    for (int i = 0; i < vSize; i++) {
        answer[i + dir < 0 ? vSize - 1 : i + dir] = numbers[i];
    }
    if (direction == "left") {
        answer[vSize - 1] = temp;
    }
    else {
        answer[0] = temp;
    }
    return answer;
}