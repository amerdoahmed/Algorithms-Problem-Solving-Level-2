// Copy Array Add Array Elements :
#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int ReadNumber(string message)
{
    int Number;

    cout << message << endl;
    cin >> Number;

    return Number;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Enter Number of elements :\n";
    cin >> arrLength;

    for (int i = 0;i < arrLength;i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";

    cout << "\n";
}

void CopyArrayUsingAddArrayElements(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    int arr2Length = 0;

    CopyArrayUsingAddArrayElements(arr, arr2, arrLength, arr2Length);

    cout << "Array 1 Elements :\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy :\n";
    PrintArray(arr2, arr2Length);


    return 0;
}



