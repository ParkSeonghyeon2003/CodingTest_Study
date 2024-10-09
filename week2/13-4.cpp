#include <vector>
using namespace std;

int solution(vector<int> sides) {
    int maxSide, twoSidesSum;

    int maxIdx = sides[0] > sides[1] ? 0 : 1;
    maxIdx = sides[2] > sides[maxIdx] ? 2 : maxIdx;
    maxSide = sides[maxIdx];

    sides.erase(sides.begin() + maxIdx);
    twoSidesSum = sides[0] + sides[1];

    if (maxSide < twoSidesSum) return 1;
    else return 2;
}