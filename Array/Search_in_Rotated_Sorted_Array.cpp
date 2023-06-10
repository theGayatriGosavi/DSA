/*
Given a sorted and rotated array arr[] of size N and a key, the task is to find the key in the array.
Note: Find the element in O(logN) time and assume that all the elements are distinct.
Example:  
Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, key = 3
Output : Found at index 8
*/
#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int l, int h, int key)
{
    if(l>h)
      return -1;
    int mid =(l+h)/2;
    if(arr[mid]==key)
      return mid;
    if(arr[l]<=arr[mid])
    {
        if(key>=arr[l] && key<=arr[mid])
           return search(arr,l,mid-1,key);
        return search(arr,mid+1,h,key);
    }
    if(key>=arr[mid] && key<=arr[h])
       return search(arr, mid+1, h, key);
    return search(arr, l, mid-1, key);
}
int main()
{
    int arr[]={5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n=9;
    int key=3;
    int i=search(arr,0,n-1,key);
    if(i!=0)
      cout<<"Index: "<<i<<endl;
    else 
      cout<<"Key not found"<<endl;
    return 0;
}