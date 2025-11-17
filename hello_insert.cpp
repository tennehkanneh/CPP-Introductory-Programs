#include <iostream>
using namespace std;    // standard libray (std, string, cout, cin, etc.)

int main() 
{
    std:string name;
    
    cout << "What is your name?\n";
    cin >> name;    // Taking input from user and store it in variable

    // Output "Hello [name]"
    cout << "Hello " << name << "!";

    return 0;
}