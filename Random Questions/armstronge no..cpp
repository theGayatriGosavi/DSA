#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0)
    {
       int rem=n%10;
        sum+= pow(rem,3);
        n=n/10;
    }
    if(original==sum)
        {cout<<"armstronge"<<endl;}
    else
        {cout<<"not an armstronge"<<endl;}

    return 0;
}
