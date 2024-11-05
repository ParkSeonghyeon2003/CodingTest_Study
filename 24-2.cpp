#include <string>
#include <iostream>

using namespace std;

int bintodec(int bin)
{
    int dec = 0;
    int magni = 1;
    while (bin != 0)
    {
        if (bin % 2 == 1) dec += magni;
        magni *= 2;
        bin /= 10;
    }
    return dec;
}

string dectobin(int dec)
{
    string bin = "";
    while (dec != 0)
    {
        if (dec % 2 == 1) bin = '1' + bin;
        else bin = '0' + bin;
        dec /= 2;
    }
    if (bin == "") return "0";
    return bin;
}

string solution(string bin1, string bin2)
{
    int dec1 = bintodec(stoi(bin1));
    int dec2 = bintodec(stoi(bin2));
    string resultBin = dectobin(dec1 + dec2);
    return resultBin;
}