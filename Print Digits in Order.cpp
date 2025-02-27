// Print Digits in Order

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do {
        cout << "Please Enter a Positive Number !\n";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

void PrintDigits(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {

        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}


int main()
{
    PrintDigits(ReverseNumber(ReadPositiveNumber("Please Enter a Positive Number !\n")));

    return 0;
}




