#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
//    memset(dp, -1, sizeof(dp));
 
    ll t; cin>>t;
 
    while(t--)
    {
        ll n; cin>>n;
 
        vector<ll> v;
 
        for(int i = 0; i<n; i++)
        {
            ll x; cin>>x;
            v.push_back(x);
        }
 
        int c = 0;
        int streak = 0;
        int c1 = 0;
        bool flag = false;
 
        for(int i=0; i<n; i++)
        {
 
            if(flag && v[i]!=1)
            {
                streak++;
            }
 
            if(flag && v[i] == 1)
            {
                flag = false;
                c += streak;
                streak = 0;
            }
 
            if(v[i]==1)
            {
                flag = true;
                c1++;
            }
 
        }
 
        if(c1==1) cout<<"0"<<endl;
        else cout<<c<<endl;
    }
}
