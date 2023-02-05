#include <iostream>
using namespace std;
main()
{
    string name;
    char letter;
    cout << "Enter the name :";
    getline(cin, name);
    int counter = name.length();
    cout << "enter the letter :";
    cin >> letter;
    if (name[counter - 1] = letter)
    {
        cout << "Same";
    }
    else
    {
        cout << "Not same";
    }
}