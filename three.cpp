#include <iostream>
using namespace std;
int main()
{
    int n1, n2, ans;
    char oper;
 try{ 
    cout << "Enter first number " << endl;
    cin >> n1;
    if (n1 == 0)
        throw n1;
    cout << "Enter the operator " << endl;
    cin >> oper;
    if (oper != '+' && oper != '-' && oper != '*' && oper != '/')
    {
        throw oper;
    }
    cout << "Enter second number " << endl;
    cin >> n2;
    switch (oper)
    {
    case '+':
        ans = n1 + n2;
        cout << "Result = " << ans;
        break;
    case '-':
        ans = n1 - n2;
        cout << "Result = " << ans;
        break;
    case '*':
        ans = n1 * n2;
        cout << "Result = " << ans;
        break;
    case '/':
    if(n2==0)
    throw n2;
        ans = n1 / n2;
        cout << "Result = " << ans;
        break;
    }
}
    catch (const int r)
    {
        cout << "Exception occure because number is " << r << endl;
    }
    catch (const char b){
        cout<<"Wrong operator "<<b<<endl;
    }
    return 0;
}