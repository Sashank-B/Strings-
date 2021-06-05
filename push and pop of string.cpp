
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str ="geeks for geeks";
    cout<<"the initial string is:";
    cout<<str;
    str.push_back('s');
    cout<<"string after push back is";
    cout<<str;
    str.pop_back();
    cout<<"string after pop_back is";
    cout<<str;
    return 0;
}
    
