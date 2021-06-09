#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int ispalindrome(int n)
{
   int rev=0;
   for(int i=n;i>0;i=i/10)
    rev=rev*10+i%10;
    return(n==rev);
}
void countpal(int min,int max)
{
    for(int i=min;i<=max;i++)
    if(ispalindrome(i))
    cout<<i<<" ";
}
int main()
{
   countpal(100,2000);
    return 0;
}
