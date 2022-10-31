#include <iostream>
using namespace std;
#include<string.h>
int main()
{
    char arr[100];
    cout << "Enter your pin code " << endl;
    gets(arr);
    int len=strlen(arr);
    try
    {   
        if(len>6 ||len <6 ){
    
            throw 0;
        }
        
        for(int i=0;i<6;i++){
            if((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z')){
                throw 0;
            }
        }
        cout<<"Pin Code is Correct "<<endl;
    }
    catch (int e)
    {
        cout << "Invalid Code " << endl;
    }
    return 0;
}
