#include <iostream>
#include <cstdlib>
#include <cctype>      // <- needed for toupper()
using namespace std;

template <typename T>
class Stack
{
private:
    T data[100];
    int top = -1;

public:
    void push(T value)
    {
        data[++top] = value;
    }

    T pop()
    {
        return data[top--];
    }

    bool empty() const
    {
        return top == -1;
    }

    int size() const
    {
        return top + 1;
    }
};

int main()
{
    srand(time(0));

    const int ROUNDS = 10;
    Stack<int> stack;

    // Fill stack with random numbers 1-100
    for (int i = 0; i < ROUNDS; i++)
        stack.push(rand() % 100 + 1);

    cout << "Welcome to the High-Low Stack Game!\n";
    int score = 0;

    if (stack.empty()) return 0;

    int current = stack.pop();
    cout << "Your number is: " << current << endl;

    while (!stack.empty())
    {
        int next = stack.pop();

        char guess;
        cout << "Will the next number be Higher (H) or Lower (L)? ";
        cin >> guess;
        guess = static_cast<char>(toupper(static_cast<unsigned char>(guess)));

        bool correct = ((guess == 'H' && next > current) || (guess == 'L' && next < current));
        
        cout << "Next number is: " << next << endl;

        if (correct)
        {
            cout << "Correct! +1 point.\n\n";
            score++;
        }
        else
        {
            cout << "Wrong!\n\n";
        }

        current = next;
    }

    cout << "Game over! Your total score is: " << score << "/" << ROUNDS - 1 << endl;

    return 0;
}
