#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define NO_OF_CHAR 256
int* print2(string str2)
{
    int* count=(int*)calloc(sizeof(int),NO_OF_CHAR);
    for(int i=0;i<str2.size();i++){
        count[str2[i]]++;
    }
    return count;
}
string remove(string str1, string str2)
{
    int* count=print2(str2);
    string res;
    int index=0;
    while(index<str1.size())
    {
        char temp=str1[index];
        if(count[temp]==0)
        {
            res.push_back(temp);
        }
        index++;
    }
    return res;
}
int main()
{
    string str1="sony";
    string str2="somu";
    cout<<remove(str1,str2);
    
}
