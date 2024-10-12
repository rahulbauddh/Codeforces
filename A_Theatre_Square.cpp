#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n,m,a;
    cin>>n>>m>>a;
    int one = n/a;
    int two = m/a;
    if(n%a)
    one += 1;

    if(m%a)
    two += 1;

    cout<<one*two<<endl;
}