// My ABS :

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

float MyABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;
}


int main()
{
    double Number = ReadNumber();

    cout << "My abs Result : " << MyABS(Number) << endl;
    cout << "C++ abs Result : " << abs(Number) << endl;

    return 0;
}



