#include<iostream>
using namespace std;
int main()
{
int realAdd,imagAdd,realSub,imagSub;
int r1,i1,r2,i2;
cout<<"enter 1st complex:";
cin>>r1>>i1;
cout<<"enter 2nd complex:";
cin>>r2>>i2;

realAdd=r1+r2;
imagAdd=i1+i2;
realSub=r1-r2;
imagSub=i1-i2;
cout<<"addition="<<realAdd<<"+"<<imagAdd<<"i"<<endl;
cout<<"subtraction="<<realSub<<"+"<<imagSub<<"i"<<endl;
return 0;
}
