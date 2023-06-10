/* Input: k = 3, arr[] = {1, 2, 3, 4, 1, 2, 3, 4}
Output: false
All duplicates are more than k distance away.

Input: k = 3, arr[] = {1, 2, 3, 1, 4, 5}
Output: true
1 is repeated at distance 3.

Input: k = 3, arr[] = {1, 2, 3, 4, 5}
Output: false

Input: k = 3, arr[] = {1, 2, 3, 4, 4}
Output: true */
#include<bits/stdc++.h>
using namespace std;
bool checkduplicatewithinK(int arr[], int n, int k)
{
    unordered_set<int>myset;
    for(int i=0; i<n; i++)
    {
        if(myset.find(arr[i])!=myset.end())
          return true;
        myset.insert(arr[i]);
        if(i>=k)
          myset.erase(arr[i-k]);
    }
    return false;
}
int main()
{
  int arr[]={1, 2, 3, 4, 1, 2, 3, 4};
  int n=8;
  if(checkduplicatewithinK(arr,n,3))
    cout<<"True"<<endl;
  else
    cout<<"False"<<endl;

  return 0;
}