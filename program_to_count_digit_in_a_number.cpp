#include<iostream>
using namespace std;
int main()
{
  int n,count=0;
cout<<"Enter the number:";
cin>>n;
if(n==0)
count=1;
else
while(n!=0)
{
n=n/10;
count++;
}
cout<<"The digits in a number is:"<<count<<endl;



}
