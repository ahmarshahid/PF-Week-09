#include <iostream>
using namespace std;
main()
{
    int size = 0;
    cout << "enter size of array :";
    cin >> size;
    int array[size];
    int number;
    cout << "Enter the number that you want to multiple : ";
    cin >> number;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the number :";
        cin >> array[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i] * number << " ";
    }
}