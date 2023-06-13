#include <iostream>
using namespace std;

// Print all rotations of a string
void printRotatedString(const string& str)
{
    int n = str.length();

    // Iterate through each rotation
    for (int i = 0; i < n; i++)
    {
        // Print characters from the ith index to the end of the string
        for (int j = i; j < n; j++)
        {
            cout << str[j];
        }

        // Print characters from the beginning of the string to the (i-1)th index
        for (int j = 0; j < i; j++)
        {
            cout << str[j];
        }

        cout << endl;
    }
}

// Driven Program
int main()
{
    string str = "geeks";
    printRotatedString(str);
    return 0;
}
