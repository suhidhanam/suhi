#include<iostream>
using namespace std;
void Count(string str)
{
    int  number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
         if (str[i]>= '0' && str[i]<= '9')
            number++;
        else
            special++;
    }
    cout << "Number : " << number << endl;
    cout << "Special characters : " << special << endl;
}
int main()
{
    string str = "#GeeKs01fOr@gEEks07";
    Count(str);
    return 0;
}
