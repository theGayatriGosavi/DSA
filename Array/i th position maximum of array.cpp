#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int t;
    cout<<"enter no. of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"enter elements in array";
        for(int i=0; i<n; i++)
        {
           cin>>arr[i];
        }
        cout<<endl;
        int mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
        mx=max(mx,arr[i]);
          cout<<mx<<" ";
        }
    }
    return 0;
}
