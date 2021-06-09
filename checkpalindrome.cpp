#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
void ispalindrome(char str[])
{
    int l=0;
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            cout<<"not a palindrome";
            return;
        }
    }
    cout<<"is a palindrome";
}
int main()
{
    ispalindrome("abba");
    ispalindrome("sosos");
    ispalindrome("somu");
    return 0;
}
