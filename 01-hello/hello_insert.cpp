#include <iostream>
using namespace std;    // standard libray (std, string, cout, cin, etc.)

int main() 
{
    string name;
    
    cout << "What is your name?\n";
    cin >> name;    // Taking input from user and store it in variable

    // Output "Hello [name]"
    cout << "Hello " << name << "!" << endl;

    return 0;
}