// My Sqrt :

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

float MySqrt(double Number) {
    return pow(Number, 0.5);
}


int main()
{
    double Number = ReadNumber();

    cout << "My Sqrt Result : " << MySqrt(Number) << endl;

    cout << "C++ Sqrt Result : " << sqrt(Number) << endl;

    return 0;
}



