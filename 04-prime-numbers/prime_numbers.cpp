#include <iostream>
using namespace std;


bool isPrimeNumber(int n)
{
    if (n <= 1) { return false; }
        
    for (int i = 2; i * i <= n; i++)
    { 
        if (n % i == 0)
            return false;
    }
    return true;
}

void primeNumbBetween(int start, int end)
{
    if (start > end) return;

    if (isPrimeNumber(start)) 
    {
        cout << start << " ";
    }

    primeNumbBetween(start + 1, end);
}

int main()
{
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    if (start > end)
    {
        cout << "Starting number must be less than or equal to ending number!" << endl;
        return 1;
    }

    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    primeNumbBetween(start, end);

    return 0;
}
