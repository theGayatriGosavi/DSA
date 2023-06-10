#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int l=0;
    int h=n;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==key)
            return mid;
        else
        if(key<arr[mid])
        {
            h=mid-1;
        }
        else
        if(key>arr[mid])
        {
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cout<<"enter no. of test cases"<<endl;
    cin>>t;
    while(t--)
 {  int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    cout<<BinarySearch(arr,n,key)<<endl;
 }
    return 0;
}
