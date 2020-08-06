#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<int> v1, v2, v3, v4;
 
        for(ll i=0; i<n; i++)
        {
            ll x; cin>>x;
            v1.push_back(x);
 
        }
        for(ll i=0; i<n; i++)
        {
            ll x; cin>>x;
            v2.push_back(x);
 
        }
 
        ll min1 = *min_element(v1.begin(), v1.end());
        ll min2 = *min_element(v2.begin(), v2.end());

        for(ll i=0; i<n; i++)
        {
            v3.push_back(abs(min1-v1[i]));
        }
       
        for(ll i=0; i<n; i++)
        {
            v4.push_back(abs(min2-v2[i]));
        }
 
        ll result=0;
        for(ll i=0; i<n; i++)
        {
            if(v3[i]>v4[i]) result+=v3[i];
            else result+=v4[i];
        }
 
        cout<<result<<"\n";
    }
}
