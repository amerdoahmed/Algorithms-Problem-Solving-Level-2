//P2/2 Print All Prime Numbers from 1 to N

#include <iostream>
#include <string>

using namespace std;

enum enPrimNotPrime {
    Prime = 1,
    NotPrime = 2
};
int ReadPositiveNumber(string message)
{
    float Number;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2;Counter <= M;Counter++)
    {
        if (Number % Counter == 0)
        {
            return enPrimNotPrime::NotPrime;
        }
        return enPrimNotPrime::Prime;
    }
}
void PrintPrimeNumbersFrom1ToN()
{
    int N = ReadPositiveNumber("Please Enter Number !\n");
    for (int i = 0; i <= N; i++)
    {
        if (CheckPrime(i) == Prime)
            cout << i << endl;
    }
}

int main()
{
    cout << "Problem 2/2 \n";
    PrintPrimeNumbersFrom1ToN();
}