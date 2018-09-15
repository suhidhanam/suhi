#include<iostream>
using namespace std;
void Count(string str)
{
    int  number = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>= '0' && str[i]<= '9')
            number++;
    }
    cout << "Number : " << number << endl;
}
int main()
{
    string str = "#GeeKs01fOr@gEEks07";
    Count(str);
    return 0;
}
