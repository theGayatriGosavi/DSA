/* https://www.youtube.com/watch?v=utn2wJ7VAns&t=89s
Given a string S, The task is to remove all the consecutive duplicate characters of the string and return the resultant string. 
Note: that this problem is different from Recursively remove all adjacent duplicates. Here we keep one character and remove all subsequent same characters.
Examples: 
Input: S= “aaaaabbbbbb”
Output: ab
Input: S = “geeksforgeeks”
Output: geksforgeks
Input: S = “aabccba”
Output: abcba

#include <bits/stdc++.h>
using namespace std;
string removeconsecutivechar(string s)
{
    string res="";
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        if(i<n-1 && s.charAt(i)==s.charAt(i+1))
            { continue; }
        else
        { res+=s.charAt(i); }
     }
     return res;
}
int main()
{
    string s="aaaaabbbbbb";
    cout<<removeconsecutivechar(s);
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;
int int main()
{
    cout << "Hello world";
    return 0;
}