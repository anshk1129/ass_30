#include<iostream>
using namespace std;
int main(){
    char c='r';
    try{
if(c=='r')
        throw c;
    }
    catch(char v){
        cout<<"Exception occur"<<endl;
    }
    return 0;
}