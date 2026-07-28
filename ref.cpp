#include<iostream>
using namespace std;
void swapref(int &a,int &b){
int t;
t=a;
a=b;
b=t;
}
int main() {
int x,y;
cout<<"enter two no";
cin>>x>>y;
swapref(x,y);
cout<<"after swapping:x="<<x<<"y"<<y;
return 0;
}
