#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=2; i<=n; i++)
       {
          fact=fact*i;
       }
    return fact;
}
int main()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}
