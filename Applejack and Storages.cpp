#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

//ll dp[1000000];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    //freopen("examinput.txt", "r", stdin);
    //freopen("examoutput.txt", "w", stdout);
    //memset(dp, -1, sizeof(dp));
    int n; cin>>n;
    map<int,int> m1;
    map<int,int> m2;

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;

        m1[x]++;

        if(m1[x]<=8)
        {
            m2[m1[x]]++;
            m2[m1[x]-1]--;
        }
    }

    int u; cin>>u;

    for(int i=0; i<u; i++)
    {
        char ch; cin>>ch;
        cout<<" ";
        int x; cin>>x;

        if(ch=='+')
        {
            m1[x]++;

            if(m1[x]<=8)
            {
                m2[m1[x]]++;
                m2[m1[x]-1]--;
            }

        }
        else
        {
            m1[x]--;

            if(m1[x]<=7)
            {
                m2[m1[x]]++;
                m2[m1[x]+1]--;
            }

        }

        if( ( m2[8]>=1 || m2[4] + m2[5] + m2[6] + m2[7] >= 2 ) || ( m2[4] + m2[5] + m2[6] + m2[7] >= 1 && m2[2] + m2[3] >=2 ) || ( m2[6] + m2[7] >= 1 && m2[2] + m2[3] >= 1) )  cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
