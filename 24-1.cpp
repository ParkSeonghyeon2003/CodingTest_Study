int solution(int chicken)
{
    if (chicken >= 10) return 1 + (chicken - 10) / 9;
    else return 0;
}