/* Write a program to reverse an array or string
    Input  : arr[] = {1, 2, 3}
    Output : arr[] = {3, 2, 1} 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int j=n-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}

/* Time Complexity : O(n) */