int solution(int n)
{
	int pizza = 1;
	// ���� �� % ��� �� != 0�� ���� ���� �߰�
	while (6 * pizza % n != 0) pizza++;
	return pizza;
}