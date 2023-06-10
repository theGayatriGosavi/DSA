#include<iostream>
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
        int curr=0;
        for(int i=0; i<n; i++)
        {
            curr=0;
            for(int j=i; j<n; j++)
            {
                curr=curr+arr[j];
                cout<<curr<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
