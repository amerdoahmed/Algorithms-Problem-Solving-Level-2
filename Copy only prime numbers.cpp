// Copy only prime numbers:
#include <iostream>
#include <cstdlib>

using namespace std;

enum enPrimNotPrime {
    Prime = 1,
    NotPrime = 2
};

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;

    }
    return enPrimNotPrime::Prime;;
}

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
        arr[i] = RandomNumber(1, 100);

}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";

    cout << "\n";
}



void CopyOnlyPrimeNumbers(int arrSource[100], int arrDistination[100], int arrLength, int& arr2Length)
{
    int Counter = 0;
    for (int i = 0;i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
            arrDistination[Counter] = arrSource[i];
            Counter++;
        }
    }

    arr2Length = --Counter;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100], arr2Length = 0;

    CopyOnlyPrimeNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 Elements : ";
    PrintArray(arr, arrLength);

    cout << "\nPrime Numbers in Array 2 : ";
    PrintArray(arr2, arr2Length);

    return 0;
}



