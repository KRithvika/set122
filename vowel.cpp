#include<iostream.h>
using namespace std;
int main()
{
    char z;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> z;
    isLowercaseVowel = (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u');
    isUppercaseVowel = (z == 'A' || z == 'E' || z == 'I' || z == 'O' || z == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        cout << z << " is a vowel.";
    else
        cout << z << " is a consonant.";

    return 0;
}
