// Random Small Letter, Capital Letter, Special Character , Digit in Order
#include <iostream>
#include <cstdlib>

using namespace std;

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


int main()
{
    // Seed the random number generator with the current time.
    // This ensures that we get a different sequence of random numbers on each run.
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;

    return 0;
}



