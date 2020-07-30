#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while(cin>>n)
    {
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }

        int maxCount = 0;
        for(int i=0; i<n; i++)
        {
            int count = 0;

            int v_i = v[i];

            for(int j=i+1; j<n; j++)
            {
                if(v[j]<=v_i)
                {
                    count++;
                    v_i = v[j];
                }
                else break;
            }

            v_i = v[i];

            for(int j=i; j>=0; j--)
            {
                if(v[j]<=v_i)
                {
                    count++;
                    v_i = v[j];
                }
                else break;
            }
            if(count>maxCount) maxCount = count;
        }
        cout<<maxCount<<endl;
    }

}
