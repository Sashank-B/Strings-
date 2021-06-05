
#include<cstring>
#include<iostream>
#include<stdio.h>
using namespace std;
bool isAplhabet(char x)
{
    return((x>='A' && x<='Z') || (x>='a' && x<='z'));
}

void reverse(char str[])
{
    int r= strlen(str) - 1;
    int l=0;
    while(l<r)
    {
        if(!isAplhabet(str[l]))
        l++;
        else if(!isAplhabet(str[r]))
        r--;
        else
        {
            swap(str[l],str[r]);
            l++;
            r--;
        
        }
    }
}
int main()
{
    char str[]="a!!!b.c.d,e'f,ghi";
    cout<<"input string:"<<str<<endl;
    reverse(str);
    cout<<"output string"<<str<<endl;
    return 0;
    
}
    
