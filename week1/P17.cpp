int solution(int price)
{
	int dcPerc = 0;

	if (price >= 500000) dcPerc = 20;
	else if (price >= 300000) dcPerc = 10;
	else if (price >= 100000) dcPerc = 5;
	
	price -= price * dcPerc / 100.0;
	return price;
}