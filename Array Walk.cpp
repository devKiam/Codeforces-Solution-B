#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

ll mz[100000][5];

ll aw(vector<ll> &v, ll k, ll z, ll i)
{
    ll result;
    bool flag = false;

    if(k==0)
    {
        return v[i];
    }

    if(mz[i][z]!=-1)
    {
        return mz[i][z];
    }

    if(k>0)
    {
        if(z!=0 && flag == false && i>0){
            flag = true;
            result = max( v[i] + aw(v, k-1, z-1, i-1), v[i] + aw(v, k-1, z, i+1) );
        }
        else
        {
            flag = false;
            result = v[i] + aw(v, k-1, z, i+1);
        }
    }

    mz[i][z] = result;
    return result;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        ll n,k,z; cin>>n>>k>>z;
        k--;
        vector<ll> v;
        for(int i=0; i<n; i++)
        {
            ll input; cin>>input;
            v.push_back(input);
        }
        
        memset(mz, -1, sizeof(mz));
        cout<<aw(v, k, z, 1) + v[0]<<"\n";
    }
}
