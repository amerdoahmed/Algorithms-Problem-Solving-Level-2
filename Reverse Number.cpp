// Reverse Number

#include <iostream>
#include <string>

using namespace std;


int ReadPositiveNumber(string message)
{
    int Number;
    do {
        cout << "Please Enter a Positive Number\n";
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int PrintReverseNumber(int Number)
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

int main()
{
    cout << "\nReverse is : \n" <<
        PrintReverseNumber(ReadPositiveNumber("Enter a Positive Number"))
        << "\n";
    return 0;
}




