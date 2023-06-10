#include<iostream>
using namespace std;
int sum(int n)
{
   int s=0;
   for(int i=1;i<=n;i++)
   { s=s+i;}
   return s;
}
int32_t main()
{
  int n;
  cout<<"enter a no."<<endl;
  cin>>n;
  int ans=sum(n);
  cout<<ans<<endl;
  return 0;
}
