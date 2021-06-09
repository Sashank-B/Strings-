#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
void printstring(string str,char ch, int count)
{
    int occ=0,i;
    if(count==0){
        cout<<str;
        return;
    }
    for(i=0;i<str.length();i++)
    {
        if(str[i]==ch)
         occ++;
        if(occ==count)
         break;
    }
    if(i<str.length()-1)
     cout<<str.substr(i+1,str.length()-(i+1));
    else
     cout<<"empty string";
}
int main()
{
    string str="geeks for geeks";
    printstring(str, 'e',2);
    return 0;
}
        
