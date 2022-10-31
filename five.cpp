#include <iostream>
using namespace std;
#include<string.h>
int main()
{
    char arr[100];
    cout << "Enter your mobile number " << endl;
    gets(arr);
    int len=strlen(arr);
    try
    {   
        if(len>10){
            throw 0;
        }
        cout<<"Phone number is correct "<<endl;
    }
    catch (int e)
    {
        cout << "Invalid Number " << endl;
    }
    return 0;
}
