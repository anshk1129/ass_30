#include<iostream>
using namespace std;
void check(int n);
int main(){

    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    check(n);
    return 0;
}
void check(int n){
    try
    {
        if(n>0&&n<9){
            throw n;
        }
        cout<<"It is not a single digit number "<<n<<endl;
        throw;
    }
    catch(const int a)
    {
        cout<<"It is a single digit number "<<n<<endl;
    }
    catch(...){
        cout<<"hey "<<endl;
    }
    
}