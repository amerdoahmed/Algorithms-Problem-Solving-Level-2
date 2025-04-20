// Fill Array with Keys :
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

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
    {

        // Generate a random lowercase letter(ASCII codes 97 to 122).
        return char(RandomNumber(97, 122));
        break; // break is not strictly needed after a return.
    }
    case enCharType::CapitalLetter:

        // Generate a random uppercase letter (ASCII codes 65 to 90).
        return char(RandomNumber(65, 90));
        break;

    case enCharType::SpecialCharacter:

        // Generate a random special character (ASCII codes 33 to 47).
        return char(RandomNumber(33, 47));
        break;
    case enCharType::Digit:

        // Generate a random digit (ASCII codes 48 to 57).
        return char(RandomNumber(48, 57));
        break;

    }
    return '\0';
}

string GenerateWord(enCharType CharType, short Length)
{
    string Word;  // Initialize an empty string to build the word.

    // Loop for the number of characters specified by Length.
    for (int i = 1; i <= Length; i++)
    {
        // Append a random character of the specified type to the word.
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey()
{
    string Key = "";  // Initialize an empty key string.

    // Concatenate four groups of 4 random uppercase letters, separated by hyphens.
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    // Loop from 1 to NumberOfKeys.
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        // Print the current key number and the generated key.
        cout << "Array [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}

void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements :\n\n";

    for (int i = 0;i < arrLength;i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

void FillArrayWithKeys(string arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
    {
        arr[i] = GenerateKey();
    }
}


int main()
{
    // Seed the random number generator with the current time.
    // This ensures that we get a different sequence of random numbers on each run.
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength = 0;

    arrLength = ReadPositiveNumber("How many keys you want to generate ?\n");

    FillArrayWithKeys(arr, arrLength);

    PrintStringArray(arr, arrLength);

    return 0;
}



