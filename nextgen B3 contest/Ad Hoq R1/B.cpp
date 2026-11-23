#include<bits/stdc++.h>
using namespace std;
int main ()
{

    long long a;
    cin>>a;
    vector<long long> v(a);
    long long sum=0;

    for(int i=0;i<a;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<" "<<v[a-1]<<" "<<sum<<endl;

    return 0;
}