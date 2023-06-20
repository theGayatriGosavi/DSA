/*
https://www.youtube.com/watch?v=wkDfsKijrZ8
Given an expression string exp, write a program to examine whether the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in the given expression.
Example: 
Input: exp = “[()]{}{[()()]()}” 
Output: Balanced
Explanation: all the brackets are well-formed
Input: exp = “[(])” 
Output: Not Balanced
Explanation: 1 and 4 brackets are not balanced because 
there is a closing ‘]’ before the closing ‘(‘
*/
#include <bits/stdc++.h>
using namespace std;
bool isparenthesis(string s)
{
    stack<char> stk;
    for(int i=0; i<s.length(); i++)
    {
        if(stk.empty())
            { stk.push(s[i]); }
        else
        if((stk.top()=='(' && s[i]==')') || (stk.top()=='{' && s[i]=='}') || (stk.top()=='[' && s[i]==']'))
           { stk.pop(); } 
        else
         { stk.push(s[i]); }
    }
    if(stk.empty())
        {return true;}
    return false;

}
int main()
{
    string s = "[(])";

    if(isparenthesis(s))
        {cout << "Balanced" <<endl;}
    else
        cout << "Not Balanced" <<endl;
    return 0;
}