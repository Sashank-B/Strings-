#include <stdio.h>  
#include <string>
#include<iostream>
using namespace std;
int countstr(int n, int bCount,int cCount)
{
    if(bCount<0||cCount<0)
    return 0;
    if(n==0)
    return 1;
    if(bCount==0||cCount==0)
    return 1;
    
    int res=countstr(n-1,bCount,cCount);
    res+=countstr(n-1,bCount-1,cCount);
    res+=countstr(n-1,bCount,cCount-1);
    return res;
}
int main()
{
    int n=3;
    cout<<countstr(n,1,2);
    return 0;
}
