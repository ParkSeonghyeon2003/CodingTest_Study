using namespace std;

long long solution(int balls, int share)
{
	double answer = 1;
	for (int i = balls-share + 1; i <= balls; i++) {
		answer *= i;
	}
	for (int i = 2; i <= share; i++) {
		answer /= i;
	}
	return answer;
}