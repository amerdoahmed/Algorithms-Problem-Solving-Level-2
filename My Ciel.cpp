// My Ciel :

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

int MyCeil(float Number)
{
    int IntPart;
    IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= 0)
    {
        if (Number > 0)
            return int(Number) + 1;
        else
            return int(Number);
    }
    else
    {
        return Number;
    }
}


int main()
{
    double Number = ReadNumber();

    cout << "My Ceil Result : " << MyCeil(Number) << endl;
    cout << "C++ Ceil Result : " << ceil(Number) << endl;

    return 0;
}



