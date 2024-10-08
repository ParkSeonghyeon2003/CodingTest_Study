int solution(int n)
{
	int fact = 1;
	int i;
	for (i = 1; i <= 10; i++) {
		if (fact*i == n) break;
		fact *= i;
	}
	return i;
}