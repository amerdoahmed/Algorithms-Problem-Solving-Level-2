// Inverted Number Pattern

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

void PrintInvertedNumberPattern(int Number)
{
    cout << "\n";

    for (int i = 65 + Number - 1; i >= 65;i--)
    {
        for (int j = 1; j <= Number - (65 + Number - 1 - i);j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }


}


int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter a Positive Number !\n"));

    return 0;
}



