#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
   
    int t; cin>>t;
    while(t--)
    {
        int m, n; cin>>m>>n;
        int count = 0;
 
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                char x; cin>>x;
 
                if(i==m-1)
                {
                    if(x!='R') count++;
                }
                if(j==n-1)
                {
                    if(x!='D') count++;
                }
            }
        }
 
        cout<<count-2<<"\n";
    }
}
