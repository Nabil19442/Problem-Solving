#include<bits/stdc++.h>
using namespace std;
int main ()
{

    while(1)
    {
        int a, b;
        char c;
        cin >> a >> c >> b;
        if(c=='?')
        {
            break;
        }
        if (c=='+')
        {
            cout << a+b << endl;
        }
        else if (c=='-')
        {
            cout << a-b << endl;
        }
        else if (c=='*')
        {
            cout << a*b << endl;
        }
        else if (c=='/')
        {
            cout << trunc(a/b) << endl;
        }
    }
    return 0;
}