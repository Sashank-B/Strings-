#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

 int main()
{
    string s1 = "somu";
    string s2 = "sony";
    
    int a1[26] = {0};
    int a2[26] = {0};
    int i , j;
    char ch;
    char ch1 = 'a';
    int k = (int)ch1, m;
    for(i = 0 ; i < s1.length() ; i++)
    { 
        a1[(int)s1[i] - k]++;
    }
    for(i = 0 ; i < s2.length() ; i++)
    {
        a2[(int)s2[i] - k]++;
    }
     for(i = 0 ; i < 26 ; i++)
    {

        if (a1[i] != 0 and a2[i] != 0)
        {
            for(j = 0 ; j < min(a1[i] , a2[i]) ; j++)
            {
                m = k + i;
                ch = (char)(k + i); 
                cout << ch; 
            }
        }
    }
    return 0;
}
