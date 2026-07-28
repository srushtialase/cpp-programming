#include<iostream>
using namespace std;
int main()
{
int n,rev=0,a,b;
cout<<"enter the number:";
cin>>n;
b=n;
while(n!=0)
{ 
a=n%10;
rev=rev*10+a;
n=n/10;
}
if(b==rev)
 cout<<"palindrome";
else
 cout<<"not palindrome";
return 0;
}
