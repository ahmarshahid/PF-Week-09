#include <iostream>
using namespace std;
main()
{
    int size =0;
    cout << "enter size of array :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}






#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter the name :";
    getline(cin, name);
   cout << name.length();
    
}