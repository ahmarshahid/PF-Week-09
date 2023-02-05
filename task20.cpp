#include <iostream>
using namespace std;
main()
{
    int size = 0;
    cout << "Enter Size :";
    cin >> size;
    float resistor[size];
    float totalresistance = 0;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter the resistance :";
        cin >> resistor[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        totalresistance = totalresistance + resistor[idx];
    }
    cout << totalresistance << " ohms";
}