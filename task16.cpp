#include <iostream>
using namespace std;
main()
{
    int number[5];
    int num;
    bool flag = false;
    cout << "Enter the digit :";
    cin >> num;
    for (int idx = 0; idx < 5; idx++)
    {
        cout << "Enter the number :";
        cin >> number[idx];
        
        if (number[idx] == num)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }
    if (flag = true)
    {
        cout << "Already Entered";
    }
}