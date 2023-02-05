#include <iostream>
using namespace std;
main()
{

    int num1[2];
    for (int idx = 0; idx < 2; idx++)
    {
        cout << "Enter the element of 1st Array:";
        cin >> num1[idx];
    }
    int size;
    cout << "Enter size :";
    cin >> size;
    int result[size + 2];
    int num2[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter the elements of 2nd Array :";
        cin >> num2[idx];
    }
    for (int idx = 0; idx < size + 2; idx++)
    {
        if (idx == 0)
        {
            result[0] = num1[0];
        }
        else if (idx == size + 1)
        {
            result[size + 1] = num1[1];
        }
        else
        {
            result[idx] = num2[idx - 1];
        }
    }
    for (int idx = 0; idx < size + 2; idx++)
    {
        cout << result[idx] << " ,";
    }
}
