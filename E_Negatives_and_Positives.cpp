#include<bits/stdc++.h>
using namespace std;
# define int long long
 
signed main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>A(n,0);
       for(int i=0;i<n;i++)
       cin>>A[i];
       int sum = 0, count = 0, temp = 0;
        for(int i=0;i<n;i++)
        {
          sum += abs(A[i]);
          if(A[i] < 0)
          count++;
        }
       for(int i=0;i<n;i++)
       {
        if(A[i] == 0)
            temp = 1;
       }
       if(temp == 1)
       cout<<sum<<endl;
       else if(count%2 == 0)
       cout<<sum<<endl;
       else
       {
        int mini = INT_MAX;
          for(int i=0;i<n;i++)
          {
            mini = min(mini,abs(A[i]));
          }
          cout<<sum-(2*mini)<<endl;
       }
      
   }
}