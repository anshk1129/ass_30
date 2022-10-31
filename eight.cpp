#include <iostream>
using namespace std;
#include<string.h>
#include<ctype.h>
int main()
{
    char arr[100],arr1[100];
    int ch=0,ch1=0,ch2=0;
    cout << "Enter your user name " << endl;
    gets(arr);
    cout << "Enter your password " << endl;
    gets(arr1);
    int len=strlen(arr1);
    try
    {   
        if(len<6){
            throw 0;
        }
        for(int i=0;arr1[i];i++){
            if(isdigit(arr1[i])){
                ch=1;
            }
            if(arr1[i]=='@'||arr1[i]=='#'||arr1[i]=='$'||arr1[i]=='*'){
               ch1=1;
            }
            if(arr1[i]>='A'&&arr1[i]<='Z'){
                ch2=1;
            }
        }
        if(ch==0||ch1==0||ch2==0){
            throw 0;
        }
        cout<<"Correct "<<endl;
    }
    catch (int e)
    {
        cout << "Invalid" << endl;
    }
    return 0;
}
