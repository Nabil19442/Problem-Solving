#include<bits/stdc++.h>
using namespace std;
int main ()
{
    while(1)
    {
        int r,c;
        cin>>r>>c;
        if(r==0 and c==0)
        {
            break;
        }
        else {
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    cout<<"#";
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
}