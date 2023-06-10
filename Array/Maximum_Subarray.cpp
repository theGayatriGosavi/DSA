/* Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.*/
#include<bits/stdc++.h>
using namespace std;
int MaxSubarraySum(int arr[],int n)
{
    int sum=0, maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if(sum<0)
          sum=0;
    }
    return maxi;
}
int main()
{
    int arr[]= {-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_sum=MaxSubarraySum(arr,n);
    cout<<"Maximum Subarray sum is: "<<max_sum<<endl;
    return 0;
}