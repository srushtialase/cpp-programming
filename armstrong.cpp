#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,a,b,digit=0;
int sum=0;
cout<<"enter the number";
cin>>n;
a=n;
while(a!=0)
{
digit++;
a=a/10;
}
a=n;
while(a!=0)
{
b=a%10;
sum=sum+pow(b,digit);
a=a/10;
}
if(sum==n)
 cout<<n<<"is armstrong no";
else
 cout<<n<<"not";
return 0;
}
