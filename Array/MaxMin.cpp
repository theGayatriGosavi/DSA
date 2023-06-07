/* Maximum and minimum of an array using minimum number of comparisons 
    Input: arr[] = {3, 5, 4, 1, 9}
    Output: Minimum element is: 1
            Maximum element is: 9

*/
#include<iostream>
using namespace std;
struct Pair
{
    int min;
    int max;
};
struct Pair getMinMax(int arr[], int low, int high)
{
   struct Pair minmax, mml, mmr;
   int mid;
   if(high==low) // one element in array
   {
      minmax.min=arr[low];
      minmax.max=arr[low];
      return minmax;
   }
   else
   if (high==low+1) // two elements in array
   {
      if (arr[low]<arr[high])
        {minmax.min=arr[low];
         minmax.max=arr[high];}
      else
        {minmax.min=arr[high];
         minmax.max=arr[low];}
      return minmax;
   }
   // more than two elements
   mid=(high+low)/2;
   mml=getMinMax(arr,low,mid);
   mmr=getMinMax(arr,mid+1,high);
   //comparing minimums of two parts
   if(mml.min<mmr.min)
     minmax.min=mml.min;
   else 
     minmax.min=mmr.min;
   //comparing maximums of two parts
   if(mml.max<mmr.max)
     minmax.max=mmr.max;
   else 
     minmax.max=mml.max;
   return minmax;
}
int main()
{
    int arr[]={3,5,4,1,9};
    int arr_size=5;
    struct Pair minmax = getMinMax(arr,0,arr_size-1);
    cout<<"Minimum element is: "<<minmax.min<<endl;
    cout<<"Maximum element is: "<<minmax.max;
    return 0;
}