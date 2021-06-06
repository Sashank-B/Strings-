#include <stdio.h>  
#include <string>
#include<iostream>
using namespace std;
char maxrepeating(string str)
{
    int len=str.length();
    int count=0;
    char res=str[0];
    for(int i=0;i<len;i++)
    {
        int cur_cnt=1;
        for(int j=i+1;j<len;j++)
        {
            if(str[i]!=str[j])
             break;
            cur_cnt++ ;
        }
        if(cur_cnt>count)
        {
            count=cur_cnt;
            res=str[i];
        }
    }
    return res;
}
int main()
{
    string str="aaaaabbaaccde";
    cout<<maxrepeating(str);
    return 0;
}
