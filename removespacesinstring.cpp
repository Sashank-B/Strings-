#include<cstring>
#include<string>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
void removespaces(char* str)
{
    int count=0;
    for(int i=0;i<str[i];i++)
    if(str[i]!=' ')
     str[count++]=str[i];
    str[count]='\0'; 
}
int main()
{
    char str[]="s o mu s a s h a n   k";
    removespaces(str);
    cout<<str;
    return 0;
}
