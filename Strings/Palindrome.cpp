/*
https://www.geeksforgeeks.org/sentence-palindrome-palindrome-removing-spaces-dots-etc/
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    string cleanedStr;
    for (char c : s) 
    {
        if (isalnum(c))
        {  // Check if character is alphanumeric
            cleanedStr += tolower(c);  // Convert to lowercase and append
        }
    }
    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());

    return cleanedStr == reversedStr;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if(isPalindrome(s))
    {
        cout << "True" << endl;
    } 
    else 
    {
        cout << "False" << endl;
    }

    return 0;
}
