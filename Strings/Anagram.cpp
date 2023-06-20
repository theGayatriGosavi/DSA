// https://www.youtube.com/watch?v=QZmh8-Auqo8
/*
An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “abcd” and “dabc” are an anagram of each other.
Examples:
Input: str1 = “listen”  str2 = “silent”
Output: “Anagram”
Explanation: All characters of “listen” and “silent” are the same.
Input: str1 = “gram”  str2 = “arm”
Output: “Not Anagram”
*/
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(const string s1, const string s2)
{
    if(s1.length()!=s2.length())
        return false;
    unordered_map<char,int> charcount;
    //update frequncy in the hashmap for str1
    for(char c: s1)
        charcount[c]++;
    //decrement frequncy in the hashmap for str2
    for(char c: s2)
       {if(charcount.find(c)!=charcount.end() || charcount[c]!=0)
            charcount[c]--; 
        else 
            return false;
        }
    if (auto items : charcount)
    {
        if(items.second!=0)
            return true;
    }
}
int main()
{
    string s1="listen";
    string s2="silent";
    if(isAnagram(s1,s2))
       cout << "Anagram" <<endl;
    else
        cout << "Not a Anagram" <<endl;
    return 0;
}