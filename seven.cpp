#include <iostream>
using namespace std;
#include<string.h>
#include<ctype.h>
int main()
{
    char arr[100];
    int ch=0,ch1=0;
    cout << "Enter your user name " << endl;
    gets(arr);
    int len=strlen(arr);
    try
    {   
        if(len<6){
            throw 0;
        }
        for(int i=0;arr[i];i++){
            if(isdigit(arr[i])){
                ch=1;
            }
            if(arr[i]=='@'||arr[i]=='#'||arr[i]=='$'||arr[i]=='*'){
               ch1=1;
            }
        }
        if(ch==0||ch1==0){
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
