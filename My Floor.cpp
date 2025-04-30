// My Floor :

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


int MyFloor(float Number)
{
    if (Number > 0)
        return int(Number);
    else
        return int(Number) - 1;
}


int main()
{
    double Number = ReadNumber();

    cout << "My Floor Result : " << MyFloor(Number) << endl;
    cout << "C++ Floor Result : " << floor(Number) << endl;

    return 0;
}



