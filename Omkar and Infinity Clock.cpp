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
        ll a, b; cin>>a>>b;
        vector<ll> v, v1, v2;
 
        for(int i=0; i<a; i++)
        {
            ll x; cin>>x;
            v.push_back(x);
        }
 
        ll max = *max_element(v.begin(), v.end());
 
        for(int i=0; i<a; i++)
        {
            v[i] = max-v[i];
        }
        v1 = v;
        max = *max_element(v.begin(), v.end());
 
        for(int i=0; i<a; i++)
        {
            v[i] = max-v[i];
        }
        v2 = v;
 
        if(b%2==0)
        {
            for(int i=0; i<v2.size(); i++)
            {
                cout<<v2[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0; i<v1.size(); i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<endl;
        }
    }
}
