#include <iostream>
#include <cstdlib> // <- needed for rand()
using namespace std;

int main()
{
    const int MAX = 10;
    int answer, guess;

    answer = rand() % MAX + 1;

    cout << "I'm thinking of a number between 1 and " << MAX << ".\nGuess what it is: ";
    cin >> guess;

    while (guess != answer)
    {
        if (guess <= 0 || guess > MAX)
        {
            cout << "Oops guess is not between 1 and 10!\n";
        }
        else if (guess < answer)
        {

            cout << "Higher!\n";
            cout << "Guess Again: ";
            cin >> guess;
        }
        else if (guess > answer)
        {

            cout << "Lower\n";
            cout << "Guess Again: ";
            cin >> guess;
        }
    };

    cout << "You guessed it!\n";
    cout << "The answer was "  << answer << "\n\n";
  
}