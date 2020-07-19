#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    for(int T=0; T<t; T++)
    {
        ll l,r,sum; cin>>l>>r>>sum;
        ll def = r-l;
        ll need;
        ll a;
        bool more = true;

        if(sum >= l)
        {
            for(ll i=l; i<=r; i++)
            {
                if( (sum%i) <= def)
                {
                    a = i;
                    need = sum%i;
                    more = false;
                    break;
                }
                else if( i-(sum%i) <= def)
                {
                    a = i;
                    need = i-(sum%i);
                    break;
                }
            }

            if(more == false)
            {
                cout<<a<<" "<<l+need<<" "<<l<<endl;
            }
            else{
                cout<<a<<" "<<l<<" "<<l+need<<endl;
            }
        }
        else // sum < l
        {
            need = l - sum;

            cout<<l<<" "<<l<<" "<<l+need<<endl;
        }
    }
}
