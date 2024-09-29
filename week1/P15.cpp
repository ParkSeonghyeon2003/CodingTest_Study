int solution(int slice, int n)
{
	int pizza = 1;
	while (slice * pizza < n) pizza++;
	return pizza;
}