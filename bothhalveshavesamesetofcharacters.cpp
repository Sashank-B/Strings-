#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
const int MAX_CHAR=26;
bool checkCorrectornot(string s)
{
    int count1[MAX_CHAR]={0};
    int count2[MAX_CHAR]={0};
    int n=s.length();
    if(n==1)
     return true;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        count1[s[i]-'a']++;
        count2[s[i]-'a']++;
        
    }
    for(int i=0;i<MAX_CHAR;i++ )
     if(count1[i]!=count2[i])
      return false;
    return true;
}
int main()
{
    string s="abdfdfsdfbadb";
    if(checkCorrectornot(s))
     cout<<"yes\n";
    else
     cout<<"No\n";
    return 0; 
}
