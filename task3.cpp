#include <iostream>
using namespace std;
main()
{
    bool isfound = false;
    int size = 0;
    int num = 0;
    cout << "enter the size of array :";
    cin >> size;
    cout << "enter the number of user :";
    cin >> num;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the num";
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (num == array[i])
        {
            isfound = true;
            break;
        }
    }
    if (isfound == true)
    {
        cout << "number found";
    }
    else
    {
        cout << "not found";
    }
}