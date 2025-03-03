// Letter Pattern

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

void PrintNumberPattern(int Number)
{
    cout << "\n";

    for (int i = 65; i <= 65 + Number - 1;i++)
    {

        for (int j = 1; j <= i - 65 + 1;j++)
        {
            cout << char(i);
        }

        cout << "\n";
    };


}


int main()
{
    PrintNumberPattern(ReadPositiveNumber("Please Enter a Positive Number !\n"));

    return 0;
}



