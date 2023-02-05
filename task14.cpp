#include <iostream>
using namespace std;
main()
{
    char word[100];
    cout << "Enter the word";
    cin >> word;
    int vowel = 0;

    for (int idx = 0; word[100]; idx++)
    {
        if (word[idx] == 'a' || word[idx] == 'e' || word[idx] == 'i' || word[idx] == 'o' || word[idx] == 'u')

            vowel++;
    }
    cout << vowel;
}