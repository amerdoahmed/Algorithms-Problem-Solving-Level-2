#include <iostream>
#include <string>

using namespace std;

// problem 3/2 : Perfect Number |Not Perfect Number

int ReadPoitiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool isPerfectNumber(int Number)
{
int Sum = 0;
for (int i = 1; i < Number; i++)
{
if (Number % i == 0)
Sum += i;
}
return Number == Sum;
}

void PrintResults(int Number)
{
    if (isPerfectNumber(Number))
        cout << Number << " is a Perfect Number" << endl;
    else
        cout << Number << " is not a Perfect Number" << endl;
}

int main()
{
    PrintResults(ReadPoitiveNumber("Please Enter a Positive Number"));
    return 0;
}
