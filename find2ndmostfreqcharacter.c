#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter your String:");
    scanf("%[^\n]",str);
    int i,max=0,sec_max=0;
    int arr[256]={0};
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
            continue;
            arr[str[i]]++;
    }
    for (i = 0; i <256; i++) {
    if (arr[i]>arr[max]) {
            sec_max=max;
            max = i;
    }
    else if(arr[i]>arr[sec_max] && arr[i]!=arr[max]){
            sec_max=i;
   }
  }
    printf("The Second Most occurring character in a string is %c",sec_max);
}
