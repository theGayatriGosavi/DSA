#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);

         /* 
            if(arr[i]>maxi)
              maxi=arr[i];
            if(arr[i]<mini)
              mini=arr[i];
         */
    }
    cout<<"highest element is : "<<maxi<<endl<<"lowest element is : "<<mini;

    return 0;

}
