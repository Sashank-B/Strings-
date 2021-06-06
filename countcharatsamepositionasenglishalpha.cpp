#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int findCount(string str)
{
	int result = 0;
    for (int i = 0 ; i < str.size(); i++)
		if (i == (str[i] - 'a') || i == (str[i] - 'A'))
			result++;
	return result;
}
int main()
{
	string str = "AbgdeF";
	cout << findCount(str);
	return 0;
}
