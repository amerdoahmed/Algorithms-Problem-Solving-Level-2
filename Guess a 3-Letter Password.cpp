// Guess a 3-Letter Password

#include <iostream>
#include <string>

using namespace std;

string ReadPassword(string message)
{
    string password;
    do {
        cout << message << endl;
        cin >> password;
    } while (password == "");
    return password;
}

bool GuessPassword(string OriginalPassword)
{
    string word = "";
    int Counter = 0;
    cout << "\n";
    for (int i = 65; i <= 90;i++)
    {

        for (int j = 65; j <= 90;j++)
        {
            for (int k = 65;k <= 90;k++)
            {
                Counter++;
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << "Trial [" << Counter << "] : " << word << endl;

                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";
                    return true;
                }
                word = "";
            }
        }

    };
    return false;
}




int main()
{
    GuessPassword(ReadPassword("Enter Password ?"));
    return 0;
}



