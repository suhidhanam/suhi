#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"it is a vowel";
    }
     else   if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"it is constant";
        else
        cout<<"it is not a vowel";
    return 0;
}
