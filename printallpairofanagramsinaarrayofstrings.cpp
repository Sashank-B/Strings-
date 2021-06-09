#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define NO_OF_CHARS 256
bool areAnagram(string str1, string str2)
{
    int count[NO_OF_CHARS]={0};
    int i;
    for(i=0;str1[i]&&str2[i];i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    if(str1[i]||str2[i])
    return false;
    for(i=0;i<NO_OF_CHARS;i++)
     if(count[i])
        return false;
    return true;
}
void findallAnagrams(string arr[],int n)
{
    for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
       if(areAnagram(arr[i],arr[j]))
        cout<<arr[i]<<"is anagram of"<<arr[j]<<endl;
}
int main()
{
    string arr[]={"geeksforgeeks","abcd","forgeeksgeeks","zuiqkeegs"};
    int n=sizeof(arr)/sizeof(arr[0]);
    findallAnagrams(arr,n);
    return 0;
}
