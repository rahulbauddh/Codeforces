#include<bits/stdc++.h>
using  namespace std;
#define int long long
signed  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
       
        cin>>s;

         int open = 0, sum = 0;
         stack<int>st;
         for(int i=0;i<n;i++)
         {
            if(s[i] == '(')
            {
                open++;
                st.push(i);
            }
            else if(s[i] == ')')
            {
                open--;
                int temp = st.top();
                st.pop();
                sum += (i-temp);
            }
           else if(s[i] == '_' && open == 0)
            {
                s[i] = '(';
                open++;
                st.push(i);
            }
            else if(s[i] == '_' && open != 0)
            {
                s[i] = ')';
                open--;
                int temp = st.top();
                st.pop();
                sum += (i-temp);
            }
         }
         cout<<sum<<endl;
    }
}