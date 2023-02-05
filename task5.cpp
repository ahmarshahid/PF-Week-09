#include <iostream>
using namespace std;
main()
{
int size =0;
int array[size];
int smaller = array[0];
cout << "enter size of array :";
cin >> size;
for(int i=0 ; i<size ; i++)
{
cout << "enter the number :";
cin  >> array[i];
}
for( int i =0 ; i < size ; i++)
{
if(smaller > array[i])
{
smaller = array[i];
}
}
cout << smaller;






}