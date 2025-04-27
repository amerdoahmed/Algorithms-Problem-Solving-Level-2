// Is Palindrome Array :    
#include <iostream>
#include <cstdlib>

using namespace std;


void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 50;
    arr[6] = 40;
    arr[7] = 30;
    arr[8] = 20;
    arr[9] = 10;
}

void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";

}

bool isPalindromArray(int arr[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {

        if (arr[i] != arr[Length - i - 1])
        {
            return false;
        }
    }

    return true;
}


int main()
{

    int arr[10], Length = 0;

    FillArray(arr, Length);

    cout << "Array 1 Elements :\n";
    PrintArray(arr, Length);

    if (isPalindromArray(arr, Length))
        cout << "\nYes Array is Palindrom\n";
    else
        cout << "\nNo Array is Not Palindrom\n";


    return 0;
}



