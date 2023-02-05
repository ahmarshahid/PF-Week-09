#include <iostream>
using namespace std;
main()
{
int size =0;
int sum =0;
float avg =0;
cout << "enter size of array :";
cin >> size;
int array[size];
for( int i =0 ; i<size ; i++)
{
    cout << "enter the number : ";
    cin >> array[i];
    sum = sum + array[i];
}
cout << " sum "<<sum;
cout << " avg " << sum /size;

}