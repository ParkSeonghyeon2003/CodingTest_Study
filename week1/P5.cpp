int solution(int num1, int num2) {
    // double로 num1 캐스팅
    // num1/num2*1000연산 수행 후 return 하면
    // int로 암묵적 캐스팅되어 정수만 반환 됨.
    return (double)num1 / num2 * 1000;
}