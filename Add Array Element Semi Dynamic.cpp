// Add Array Element Semi Dynamic :
#include <iostream>
#include <cstdlib>

using namespace std;

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

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
    bool AddMore;

    do
    {
        AddArrayElement(ReadNumber("Please Enter a Number ?\n"), arr, arrLength);

        cout << "Do you want to add more number ? [0] : No  |  [1] : Yes\n";
        cin >> AddMore;

    } while (AddMore);


}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";

    cout << "\n";
}


int main()
{

    int arr[100];
    int arrLength = 0;

    InputUserNumbersInArray(arr, arrLength);

    cout << "\nArray Length : " << arrLength << endl;
    cout << "Array Elements : ";
    PrintArray(arr, arrLength);



    return 0;
}



