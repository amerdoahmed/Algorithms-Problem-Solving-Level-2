// Random 3 Numbers From 1 To 10
#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    // Function to generate a random number

    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}



int main()
{
    // Seed the random number generator with the current time.
    // This ensures that we get a different sequence of random numbers on each run.
    srand((unsigned)time(NULL));

    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;

    return 0;
}



