#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t,n;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        int i = 0;
        while(i<s.size()-1)
        {
            if(s[i] == 'G')
            {
                i++;
                continue;
            }
            else if(s[i] == 'B' && s[i+1] == 'G')
            {
                swap(s[i],s[i+1]);
                i += 2;
            }
            else if(s[i] == 'B' && s[i+1] == 'B')
            {
                i++;
                continue;
            }
        }
    }
    cout<<s<<endl;
}