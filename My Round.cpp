// My Round :

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float ReadNumber()
{
    float Number;

    cout << "Please Enter Number !\n";
    cin >> Number;

    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyRound(float Number)
{
    int IntPart;
    IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
    {
        return IntPart;
    }
}


int main()
{
    double Number = ReadNumber();

    cout << "My Round Result : " << MyRound(Number) << endl;
    cout << "C++ Round Result : " << round(Number) << endl;

    return 0;
}



