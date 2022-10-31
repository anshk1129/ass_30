#include <iostream>
using namespace std;
#include <string.h>
#include <ctype.h>
int main()
{
    char arr[100];
    int ch = 0, ch1 = 0;
    cout << "Enter your gmail id " << endl;
    gets(arr);
    int len = strlen(arr);
    try
    {

        for (int i = 0; i < len; i++)
        {
            if (arr[i] == '@')
            {
                ch = i;
            }
            else if (arr[i] == 'g' && arr[i + 1] == 'm' && arr[i + 2] == 'a' && arr[i + 3] == 'i' && arr[i + 4] == 'l' && arr[i + 5] == '.' && arr[i + 6] == 'c' && arr[i + 7] == 'o' && arr[i + 8] == 'm')
            {
                ch1 = i;
                break;
            }
        }
        if (ch1 == 0 || ch == 0)
        {
            throw 0;
        }
        if(ch>ch1){
            throw 0;
        }

        cout << "Correct " << endl;
    }
    catch (int e)
    {
        cout << "Invalid" << endl;
    }
    return 0;
}
