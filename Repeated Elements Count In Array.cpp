// Repeated Elements Count In Array :
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string message)
{
    int Number;
    do
    {
        cout << message << endl;
        cin >> Number;
        return Number;
    } while (Number <= 0);
}

void ReadArray(int arr[100], int& arrLength)
{
    cout << "Enter Number Of Elements:\n";
    cin >> arrLength;

    cout << "Enter Array Elements :\n";
    for (int i = 0; i < arrLength;i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";

    cout << '\n';
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;  // Initialize a counter to zero.
    // Loop through the array indices from 0 to arrLength - 1.
    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (Number == arr[i])  // If the current element equals the number we're checking,
        {
            count++;  // Increment the counter.
        }
    }
    return count;  // Return the total count.
}


int main()
{
    ;int arr[100], arrLength, NumberToCheck;

    ReadArray(arr, arrLength);
    NumberToCheck = ReadPositiveNumber("Enter the number you want to chack : ");

    cout << "\nOriginal array : ";
    PrintArray(arr, arrLength);

    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";
    return 0;
}



