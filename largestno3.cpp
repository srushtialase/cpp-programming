#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter three numbers:";
cin>>a>>b>>c;
if (a>=b && a>=c)
 cout<<"largest no="<<a;
else if(b>=a && b>=c)
 cout<<"largest no="<<b;
else
 cout<<"largest no="<<c;
return 0;
}
