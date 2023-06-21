/* https://www.youtube.com/watch?v=utn2wJ7VAns&t=89s
https://www.geeksforgeeks.org/remove-consecutive-duplicates-string/
Given a string S, The task is to remove all the consecutive duplicate characters of the string and return the resultant string. 
Note: that this problem is different from Recursively remove all adjacent duplicates. Here we keep one character and remove all subsequent same characters.
Examples: 
Input: S= “aaaaabbbbbb”
Output: ab
Input: S = “geeksforgeeks”
Output: geksforgeks
Input: S = “aabccba”
Output: abcba*/

#include <bits/stdc++.h>
using namespace std;
string removeconsecutivechar(string s)
{
    string res="";
    int n = s.length();
    if(n==0)
        { return res; }
    for(int i=0; i<n-1; i++)
    {
        if(s[i]!=s[i+1])
            { res=res+s[i]; }
    }
    res.push_back(s[n-1]);
     return res;
}
int main()
{
    string s="aaaaabbbbbb";
    cout<<removeconsecutivechar(s);
    return 0;
} 
