#include<iostream>
using namespace std;
void swapValue(int a, int b){
int t;
t=a;
a=b;
b=t;
cout<<"inside function:a="<<a<<"b"<<b<<endl;
}
int main()
{
int x,y;
cout<<"enter two no:";
cin>>x>>y;
swapValue(x,y);
cout<<"outside function:x="<<x<<"y"<<endl;
return 0;
}
