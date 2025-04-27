// Count Positive Numbers in Array :

#include <iostream>
#include <cstdlib>

using namespace std;


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements\n";
    cin >> arrLength;

    for (int i = 0;i < arrLength;i++)
        arr[i] = RandomNumber(-100, 100);

}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int PositiveCount(int arr[100], int Length)
{
    int Counter = 0;
    for (int i = 0;i < Length;i++)
    {
        if (arr[i] >= 0)
        {
            Counter++;
        }
    }
    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements : \n";
    PrintArray(arr, arrLength);

    cout << "\Positive Numbers Count is : ";
    cout << PositiveCount(arr, arrLength) << endl;

    return 0;
}



