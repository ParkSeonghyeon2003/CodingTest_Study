int solution(int n)
{
	int pizza = 1;
	// 피자 판 % 사람 수 != 0면 피자 판을 추가
	while (6 * pizza % n != 0) pizza++;
	return pizza;
}