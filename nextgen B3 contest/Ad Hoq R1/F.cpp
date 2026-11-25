#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    bool open = true;
    while (cin>>s)
    {
        for(auto c : s)
        {
            if(c=='"')
            {
                if(open)
                {
                    cout<<"``";
                }
                else cout<<"''";
                open = !open;
            }
            else {
                cout<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}
