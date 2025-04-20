// Return number index in array :
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

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements\n";
    cin >> arrLength;

    for (int i = 0;i < arrLength;i++)
        arr[i] = RandomNumber(1, 100);

}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";

    cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }

    // If the loop completes without finding the number, return -1.
    return -1;
}


int main()
{
    // Seed the random number generator with the current time.
    // This ensures that we get a different sequence of random numbers on each run.
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements : ";
    PrintArray(arr, arrLength);

    int Number = ReadNumber("\nPlease enter a number to search for ?\n");
    cout << "Number you are looking for is : " << Number << endl;

    short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

    if (NumberPosition == -1)
        cout << "The number is not found :-(\n";
    else
    {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The number found its order: " << NumberPosition + 1 << endl;
    }


    return 0;
}



