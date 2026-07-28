#include<iostream>
using namespace std;
int main()
{
int a,b,choice;
cout<<"enter two no";
cin>>a>>b;
cout<<"1.add\n2.sub\n3.multi\n4.div";
cout<<"enter choice:";
cin>>choice;
switch(choice){
 case 1:
  cout<<"sum"<<a+b;
  break;
 case 2:
 cout<<"diff"<<a-b;
  break;
  case 3:
  cout<<"product"<<a*b;
  break;
 case 4:
 cout<<"division"<<a/b;
  break;
default:
 cout<<"invalid choice";
 }
 return 0;
 }
