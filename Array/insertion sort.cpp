// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;
// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, to one
		// position ahead of their
		// current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
    int t;
    cout<<"enter no. of test cases"<<endl;
    cin>>t;
    while(t--)
    {
	    int N;
        cout<<"\nEnter no. of elements"<<endl;
        cin>>N;
        int arr[N];
        cout<<"Enter elements in array"<<endl;
        clock_t start_t,end_t;
        for(int i=0;i<N;i++)
         { arr[i]=rand(); }
        start_t=clock();
        insertionSort(arr, N);
        end_t=clock();
        printArray(arr, N);
        cout<<"\nThe time for the event was:"<<end_t-start_t;
    }
     return 0;
}
// This is code is contributed by rathbhupendra
