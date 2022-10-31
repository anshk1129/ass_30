#include <iostream>
#include<string.h>
using namespace std;
void check(char *str);
int main(){
  char str[100];
  cout<<"Enter an email address"<<endl;
  gets(str);
   check(str);


    return 0;
}
void check(char *str){
    int r=-1,v=-1,len=0;
      try{
      for(int i=0;str[i];i++){
        if(str[i]=='@'){
            r=i;
        }
        else if(str[i]=='.'){
            v=i;
        }
        len++;
      }
      if(r>v){
        throw 'c';
      }
      if(v>len-1){
          throw 'c';
      }
      if(r==-1||v==-1){
        throw 'c';
      }
      cout<<"Email id is valid "<<endl;
  }
  catch(char c){
   cout<<"Exception occur\n Plse enter valid address "<<endl;
  }

}